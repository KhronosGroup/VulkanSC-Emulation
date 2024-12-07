# How to Contribute to Vulkan SC Source Repositories

## **The Repository**

The source code for the VulkanSC-Emulation components is sponsored by Khronos.
* [Khronos VulkanSC-Emulation](https://github.com/KhronosGroup/VulkanSC-Emulation)

#### **Coding Conventions and Formatting**
* Use the **[Google style guide](https://google.github.io/styleguide/cppguide.html)** for source code with the following exceptions:
    * The column limit is 132 (as opposed to the default value 80). The clang-format tool will handle this. See below.
    * The indent is 4 spaces instead of the default 2 spaces. Again, the clang-format tool will handle this.
    * If you can justify a reason for violating a rule in the guidelines, then you are free to do so. Be prepared to defend your
decision during code review. This should be used responsibly. An example of a bad reason is "I don't like that rule." An example of
a good reason is "This violates the style guide, but it improves type safety."

* Run **clang-format** on your changes to maintain consistent formatting
    * There are `.clang-format` files present in the repository to define clang-format settings
      which are found and used automatically by clang-format.
	* **clang-format** binaries are available from the LLVM orginization, here: [LLVM](https://clang.llvm.org/).
    * A sample git workflow may look like:

>        # Make changes to the source.
>        $ git add -u .
>        $ git clang-format --style=file
>        # Check to see if clang-format made any changes and if they are OK.
>        $ git add -u .
>        $ git commit

* **Commit Messages**
    * Limit the subject line to 50 characters -- this allows the information to display correctly in git/Github logs
    * Begin subject line with a one-word component description followed by a colon (e.g. loader, layers, tests, etc.)
    * Separate subject from body with a blank line
    * Wrap the body at 72 characters
    * Capitalize the subject line
    * Do not end the subject line with a period
    * Use the body to explain what and why vs. how
    * Use the imperative mode in the subject line. This just means to write it as a command (e.g. Fix the sprocket)

* **License Information**
    * Designation of license information follows [REUSE](https://reuse.software/) recommendations
    * REUSE compatibility is enforced in CI using the Python module [reuse-tool](https://github.com/fsfe/reuse-tool)

Strive for commits that implement a single or related set of functionality, using as many commits as is necessary (more is better).
That said, please ensure that the repository compiles and passes tests without error for each commit in your pull request.  Note
that to be accepted into the repository, the pull request must [pass all tests](#testing your changes) on all supported platforms

#### Generated Source Code

The `icd/generated` directory contains source code that is created by several
generator scripts in the `scripts` directory. All changes to these scripts _must_ be submitted with the
corresponding generated output to keep the repository self-consistent. This requirement is enforced by CI.
Regenerate source files after modifying any of the generator scripts and before building and testing your changes.
More details can be found in [BUILD.md](BUILD.md).

#### **Testing Your Changes**

* In order to run tests, you must first build the project with testing enabled (see details
  in the BUILD.md file).
* If your changes expose an issue not previously tested against, please also provide one or more
  tests which show a failure for the issue before your changes but pass successfully with your changes.
* Once built, simply change to the build folder, and type "ctest"
  * This will run all tests the project has defined at the time
* Additionally, once your change has begun the process of reviewing in Github,
  it may be processed through the CI system.
  * This may show additional failures on other platforms, so watch and be prepared to fix any
    additional issues.

### **Contributor License Agreement (CLA)**

You will be prompted with a one-time "click-through" CLA dialog as part of submitting your pull request
or other contribution to GitHub.

### **License and Copyrights**

All contributions made to the VulkanSC-Emulation repository are Khronos branded and as such,
any new files need to have the Khronos license (Apache 2.0 style) and copyright included.
Please see an existing file in this repository for an example.

You can include your individual copyright after any existing copyrights.
