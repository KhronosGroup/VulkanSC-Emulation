# NOTE: 32-bit Windows installs are no longer tested/supported
set(POWERSHELL_BIN "C:\\Windows\\System32\\WindowsPowerShell\\v1.0\\powershell.exe")

execute_process(COMMAND
    ${POWERSHELL_BIN} "-Command" "& {(new-object System.Security.Principal.WindowsPrincipal([System.Security.Principal.WindowsIdentity]::GetCurrent())).IsInRole([System.Security.Principal.WindowsBuiltInRole]::Administrator).ToString().ToUpper()}"
    OUTPUT_VARIABLE HIGH_INTEGRITY_CHECK_OUTPUT
    RESULT_VARIABLE HIGH_INTEGRITY_CHECK_RESULT
)
if(NOT ${HIGH_INTEGRITY_CHECK_RESULT} EQUAL 0)
    message(FATAL_ERROR "Failed to detect presence of admin priviliges.")
endif()
string(STRIP "${HIGH_INTEGRITY_CHECK_OUTPUT}" HIGH_INTEGRITY_CHECK_OUTPUT) # Strip newline
if(HIGH_INTEGRITY_CHECK_OUTPUT) # PowerShell "True"/"False" output coincides with CMake boolean
    set(HIVE HKLM)
else()
    set(HIVE HKCU)
endif()

set(COMPONENT_NAME "@ECOSYSTEM_COMPONENT@")
set(NATIVE_SETTINGS_REG_PATH "${HIVE}:\\Software\\Khronos\\VulkanSC\\${COMPONENT_NAME}")
set(CMAKE_SETTINGS_REG_PATH "${HIVE}/SOFTWARE/Khronos/VulkanSC/${COMPONENT_NAME}")
set(DISPLAY_SETTINGS_REG_PATH "${HIVE}:/SOFTWARE/Khronos/VulkanSC/${COMPONENT_NAME}")
# TODO: Handle `cmake --install` invocations, where CMAKE_INSTALL_PREFIX is absent at configuration time
set(SETTINGS_REG_CONTENT "@CMAKE_INSTALL_PREFIX@/@COMPONENT_INSTALL_DIR@/@OUTPUT_FILE_FINAL_NAME@")

# If possible, issue correct diagnostic and shortcircuit if no work needs to be done
if(CMAKE_VERSION VERSION_GREATER_EQUAL 3.24)
    cmake_host_system_information(
        RESULT COMPONENT_PROP_NAMES
        QUERY WINDOWS_REGISTRY "${CMAKE_SETTINGS_REG_PATH}" VALUE_NAMES
    )
    if("${SETTINGS_REG_CONTENT}" IN_LIST COMPONENT_PROP_NAMES)
        message(STATUS "Up-to-date: ${DISPLAY_SETTINGS_REG_PATH}")
        return()
    endif()
endif()
message(STATUS "Installing: ${DISPLAY_SETTINGS_REG_PATH}")

# TODO: Harden obtaining correct OUTPUT_FILE_FINAL_NAME against post-get_target_property modification
#       by using: https://cmake.org/cmake/help/latest/manual/cmake-file-api.7.html#codemodel-version-2-target-object
execute_process(COMMAND
    ${POWERSHELL_BIN} "-Command" "& { \
        if (-not (Test-Path '${NATIVE_SETTINGS_REG_PATH}')) { New-Item '${NATIVE_SETTINGS_REG_PATH}' -Force | Out-Null } \
        New-ItemProperty -Path '${NATIVE_SETTINGS_REG_PATH}' -Name '${SETTINGS_REG_CONTENT}' -Value 0 -Force | Out-Null }"
    OUTPUT_VARIABLE HIGH_INTEGRITY_CHECK_OUTPUT
    RESULT_VARIABLE HIGH_INTEGRITY_CHECK_RESULT
)