#!/usr/bin/env python3
# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
#
# SPDX-License-Identifier: Apache-2.0

import argparse
import filecmp
import os
import shutil
import subprocess
import sys
import tempfile
import difflib
import json
from xml.etree import ElementTree

# Runs a command in a directory and returns its return code.
# Directory is project root by default, or a relative path from project root
def RunShellCmd(command):
    # Flush stdout here. Helps when debugging on CI.
    sys.stdout.flush()
    cmd_list = command.split(" ")
    print(cmd_list)
    subprocess.check_call(cmd_list)

def RunGenerators(api: str, registry: str, directory: str, styleFile: str, targetFilter: str):

    has_clang_format = shutil.which('clang-format') is not None
    if not has_clang_format:
        print("WARNING: Unable to find clang-format!")

    # These live in the Vulkan-Docs repo, but are pulled in via the
    # Vulkan-Headers/registry folder
    # At runtime we inject python path to find these helper scripts
    scripts = os.path.dirname(registry)
    scripts_directory_path = os.path.dirname(os.path.abspath(__file__))
    registry_headers_path = os.path.join(scripts_directory_path, scripts)
    sys.path.insert(0, registry_headers_path)
    from reg import Registry

    from generators.base_generator import BaseGeneratorOptions

    from generators.entry_point_generator import EntryPointGenerator
    from generators.proc_addr_helper_generator import ProcAddrHelperGenerator
    from generators.vk_dispatchable_generator import VkDispatchableGenerator
    from generators.vk_dispatch_table_generator import VkDispatchTableGenerator
    from generators.extension_helper_generator import ExtensionHelperGenerator
    from generators.output_struct_sanitizer_generator import OutputStructSanitizerGenerator

    # These set fields that are needed by both OutputGenerator and BaseGenerator,
    # but are uniform and don't need to be set at a per-generated file level
    from generators.base_generator import SetOutputDirectory, SetTargetApiName, SetMergedApiNames
    SetOutputDirectory(directory)

    # Build up a list of all generators and custom options
    generators = {
        'vksc_entry_points.cpp': {
            'generator': EntryPointGenerator,
            'api': 'vulkansc',
            'genCombined': False
        },
        'vksc_proc_addr_helper.h': {
            'generator': ProcAddrHelperGenerator,
            'api': 'vulkansc',
            'genCombined': False
        },
        'vksc_proc_addr_helper.cpp': {
            'generator': ProcAddrHelperGenerator,
            'api': 'vulkansc',
            'genCombined': False
        },
        'vk_instance.h': {
            'generator': VkDispatchableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_instance.cpp': {
            'generator': VkDispatchableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_physical_device.h': {
            'generator': VkDispatchableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_physical_device.cpp': {
            'generator': VkDispatchableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_device.h': {
            'generator': VkDispatchableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_device.cpp': {
            'generator': VkDispatchableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_queue.h': {
            'generator': VkDispatchableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_queue.cpp': {
            'generator': VkDispatchableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_command_buffer.h': {
            'generator': VkDispatchableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_command_buffer.cpp': {
            'generator': VkDispatchableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_dispatch_table.h': {
            'generator': VkDispatchTableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_dispatch_table.cpp': {
            'generator': VkDispatchTableGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_extension_helper.h': {
            'generator': ExtensionHelperGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vk_extension_helper.cpp': {
            'generator': ExtensionHelperGenerator,
            'api': 'vulkan',
            'genCombined': False
        },
        'vksc_extension_helper.h': {
            'generator': ExtensionHelperGenerator,
            'api': 'vulkansc',
            'genCombined': False
        },
        'vksc_extension_helper.cpp': {
            'generator': ExtensionHelperGenerator,
            'api': 'vulkansc',
            'genCombined': False
        },
        'vksc_output_struct_sanitizer.h': {
            'generator': OutputStructSanitizerGenerator,
            'api': 'vulkansc',
            'genCombined': False
        },
        'vksc_output_struct_sanitizer.cpp': {
            'generator': OutputStructSanitizerGenerator,
            'api': 'vulkansc',
            'genCombined': False
        }
    }

    unknownTargets = [x for x in (targetFilter if targetFilter else []) if x not in generators.keys()]
    if unknownTargets:
        print(f'ERROR: No generator options for unknown target(s): {", ".join(unknownTargets)}', file=sys.stderr)
        return 1

    # Filter if --target is passed in
    targets = [x for x in generators.keys() if not targetFilter or x in targetFilter]

    for index, target in enumerate(targets, start=1):
        print(f'[{index}|{len(targets)}] Generating {target}')

        # This generator generates source for both Vulkan SC and Vulkan so we have
        # per target API names that we have to utilize in the generators
        targetApi = generators[target]['api']
        SetTargetApiName(targetApi)

        # First grab a class contructor object and create an instance
        targetGenerator = generators[target]['generator']
        generatorOptions = generators[target]['options'] if 'options' in generators[target] else []
        generator = targetGenerator(*generatorOptions)

        # This code and the 'genCombined' generator metadata is used by downstream
        # users to generate code with all Vulkan APIs merged into the target API variant
        # (e.g. Vulkan SC) when needed. The constructed apiList is also used to filter
        # out non-applicable extensions later below.
        apiList = [targetApi]
        if targetApi != 'vulkan' and generators[target]['genCombined']:
            SetMergedApiNames('vulkan')
            apiList.append('vulkan')
        else:
            SetMergedApiNames(None)

        baseOptions = BaseGeneratorOptions(customFileName = target)

        # Create the registry object with the specified generator and generator
        # options. The options are set before XML loading as they may affect it.
        reg = Registry(generator, baseOptions)

        # Parse the specified registry XML into an ElementTree object
        tree = ElementTree.parse(registry)

        # Filter out extensions that are not on the API list
        [exts.remove(e) for exts in tree.findall('extensions') for e in exts.findall('extension') if (sup := e.get('supported')) is not None and all(api not in sup.split(',') for api in apiList)]

        # Load the XML tree into the registry object
        reg.loadElementTree(tree)

        # Finally, use the output generator to create the requested target
        reg.apiGen()

        # Run clang-format on the file
        if has_clang_format:
            RunShellCmd(f'clang-format -i --style=file:{styleFile} {os.path.join(directory, target)}')

# helper to define paths relative to the repo root
def repo_relative(path):
    return os.path.abspath(os.path.join(os.path.dirname(__file__), '..', path))

def main(argv):
    parser = argparse.ArgumentParser(description='Generate source code for this repository')
    parser.add_argument('--api',
                        default='vulkansc',
                        choices=['vulkansc'],
                        help='Specify API name to generate')
    parser.add_argument('registry', metavar='REGISTRY_PATH', help='path to the Vulkan-Headers registry directory')
    parser.add_argument('--generated-version', help='sets the header version used to generate the repo')
    parser.add_argument('-o', help='Create target and related files in specified directory.', dest='output_directory')
    group = parser.add_mutually_exclusive_group()
    group.add_argument('--target', nargs='+', help='only generate file names passed in')
    group.add_argument('-i', '--incremental', action='store_true', help='only update repo files that change')
    group.add_argument('-v', '--verify', action='store_true', help='verify repo files match generator output')
    args = parser.parse_args(argv)

    repo_dir = repo_relative(f'icd/generated')

    # Need pass style file incase running with --verify and it can't find the file automatically in the temp directory
    styleFile = os.path.join(repo_dir, '.clang-format')

    # Update the api_version in the respective json files
    if args.generated_version:
        json_files = []
        json_files.append(repo_relative('icd/VKSC_emulation.json.in'))
        for json_file in json_files:
            with open(json_file) as f:
                data = json.load(f)

            data["layer"]["api_version"] = args.generated_version

            with open(json_file, mode='w', encoding='utf-8', newline='\n') as f:
                f.write(json.dumps(data, indent=4))

    # get directory where generators will run
    if args.verify or args.incremental:
        # generate in temp directory so we can compare or copy later
        temp_obj = tempfile.TemporaryDirectory(prefix='vvl_codegen_')
        temp_dir = temp_obj.name
        gen_dir = temp_dir
    else:
        # generate directly in the repo
        gen_dir = repo_dir

    if args.output_directory is not None:
      gen_dir = args.output_directory

    registry = os.path.abspath(os.path.join(args.registry,  'vk.xml'))
    RunGenerators(args.api, registry, gen_dir, styleFile, args.target)

    # optional post-generation steps
    if args.verify:
        verify_exclude = [
            '.clang-format'
        ]

        # compare contents of temp dir and repo
        temp_files = set(os.listdir(temp_dir))
        repo_files = set(os.listdir(repo_dir))
        for filename in sorted((temp_files | repo_files) - set(verify_exclude)):
            temp_filename = os.path.join(temp_dir, filename)
            repo_filename = os.path.join(repo_dir, filename)
            if filename not in repo_files:
                print('ERROR: Missing repo file', filename)
                return 2
            elif filename not in temp_files:
                print('ERROR: Missing generator for', filename)
                return 3
            elif not filecmp.cmp(temp_filename, repo_filename, shallow=False):
                print('ERROR: Repo files do not match generator output for', filename)
                # print line diff on file mismatch
                with open(temp_filename) as temp_file, open(repo_filename) as repo_file:
                    print(''.join(difflib.unified_diff(temp_file.readlines(),
                                                       repo_file.readlines(),
                                                       fromfile='temp/' + filename,
                                                       tofile=  'repo/' + filename)))
                return 4

        # return code for test scripts
        print('SUCCESS: Repo files match generator output')

    elif args.incremental:
        # copy missing or differing files from temp directory to repo
        for filename in os.listdir(temp_dir):
            temp_filename = os.path.join(temp_dir, filename)
            repo_filename = os.path.join(repo_dir, filename)
            if not os.path.exists(repo_filename) or \
               not filecmp.cmp(temp_filename, repo_filename, shallow=False):
                print('update', repo_filename)
                shutil.copyfile(temp_filename, repo_filename)

    return 0

if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))

