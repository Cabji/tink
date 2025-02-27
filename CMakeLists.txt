cmake_minimum_required(VERSION 3.20)

set(projectName "Tink")
project(${projectName} VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

# ** Configure: source files for the project so CMake knows what's needed
# if you add more source/resource files to your project, add them here as required for the build process
set(SOURCES 
      MyApp.cpp
      TinkBase.cpp
      TinkMain.cpp 
      MyTinkWebView.cpp
      MyTinkCalculators.cpp
      MyTinkBrewersLog.cpp
      resources.rc
   )

# ** Configure: which wxWidgets components are needed for the project to build
set(wxCOMPONENTS 
      core
      base
      webview
   )
# ** Configure: additional components this project uses
set(COMPONENTS
    SQLiteCpp
)

# Experimental: set CMAKE_PREFIX_PATH to root level of your development environment file structure
# this allows CMake to find where 3rd party libary config.cmake files are located
set(CMAKE_PREFIX_PATH
    "C:/cpp"
)

# wxWidgets built library location names
# !! the next values often cause problems if not set correctly
# wxWidgets_BUILT_LIB_DIR_NAME: look where you _installed_ wxWidgets to and open the lib/ folder. You should see a folder named gcc_x64_dll or gcc_x64_lib (it will vary depending on your computer's architecture and other things)
# wxWidgets_CONFIGURATION: inside the BUILT_LIB_DIR_NAME folder, you should see a folder named mswu or mswud (it will vary depending on what your build configuration was, and what configuration you want to use)
set(wxWidgets_BUILT_LIB_DIR_NAME "gcc_x64_dll")
set(wxWidgets_CONFIGURATION "mswu")

# Decide what build settings to use here
set(wxWidgets_USE_STATIC ON)
set(wxWidgets_USE_UNICODE ON)
set(wxWidgets_USE_DEBUG OFF)
set(wxWidgets_USE_RELEASE ON)

# NOTE: You can create a file named local_config.cmake in the same directory as this CMakeLists.txt file to set local machine path values
# For example, you can set the DEVELOPMENT_ROOT variable to where you have installed msys64
# Or set wxWidgets_ROOT_DIR variable to the path where you have installed your built wxWidgets

# !!!!!! - You probably shouldn't alter anything below here if you don't understand what you're doing !!!!!!

message(STATUS "CMake source directory: ${CMAKE_SOURCE_DIR}")

# Include local configuration if it exists - you can create this to set local machine path values
if(EXISTS ${CMAKE_SOURCE_DIR}/local_config.cmake)
    message(STATUS "Including local machine configuration file: ${CMAKE_SOURCE_DIR}/local_config.cmake")
    include(${CMAKE_SOURCE_DIR}/local_config.cmake)
else()
    message(STATUS "No local configuration file found - using default settings...")
    # DEFAULT values for build specific settings (can be overridden on a per-machine basis by using local_config.cmake)s
    set(DEVELOPMENT_ROOT "C:/msys64/ucrt64")
    set(wxWidgets_ROOT_DIR "C:/cpp")
endif()
message(STATUS "Development root directory: ${DEVELOPMENT_ROOT}")

# set wxWidgets directory values
set(wxWidgets_LIB_DIR ${wxWidgets_ROOT_DIR}/lib/${wxWidgets_BUILT_LIB_DIR_NAME})
set(wxWidgets_INCLUDE_DIRS
      "${wxWidgets_ROOT_DIR}/include"
      "${wxWidgets_LIB_DIR}/${wxWidgets_CONFIGURATION}"
   )

# Set the generator based on the operating system
if(WIN32)
    set(CMAKE_GENERATOR "Ninja")
else()
    set(CMAKE_GENERATOR "Unix Makefiles")
endif()

# Set the compiler paths
set(CPP_COMPILER "${DEVELOPMENT_ROOT}/bin/g++.exe")
set(C_COMPILER "${DEVELOPMENT_ROOT}/bin/gcc.exe")

# Check if the CMAKE specified compiler paths are valid, adjust as required
if(DEFINED CMAKE_C_COMPILER AND NOT EXISTS ${CMAKE_C_COMPILER})
    message(WARNING "Specified C compiler not found: ${CMAKE_C_COMPILER}. Using DEVELOPMENT_ROOT default: ${C_COMPILER}")
    set(CMAKE_C_COMPILER ${C_COMPILER})
endif()

if(DEFINED CMAKE_CXX_COMPILER AND NOT EXISTS ${CMAKE_CXX_COMPILER})
    message(WARNING "Specified C++ compiler not found: ${CMAKE_CXX_COMPILER}. Using DEVELOPMENT_ROOT default: ${CPP_COMPILER}")
    set(CMAKE_CXX_COMPILER ${CPP_COMPILER})
endif()

# Double check to ensure we have compiler values set
if(NOT DEFINED CMAKE_C_COMPILER)
    set(CMAKE_C_COMPILER ${C_COMPILER})
endif()

if(NOT DEFINED CMAKE_CXX_COMPILER)
    set(CMAKE_CXX_COMPILER ${CPP_COMPILER})
endif()

message(STATUS "Decided on C compiler: ${CMAKE_C_COMPILER}")
message(STATUS "Decided on C++ compiler: ${CMAKE_CXX_COMPILER}")
message (STATUS "wxWidgets_ROOT_DIR set to: ${wxWidgets_ROOT_DIR}")
message(STATUS "wxWidgets_BUILT_LIB_DIR_NAME set to: ${wxWidgets_BUILT_LIB_DIR_NAME}")
message(STATUS "wxWidgets_CONFIGURATION set to: ${wxWidgets_CONFIGURATION}")
message(STATUS "!! - wxWidgets_LIB_DIR set to: ${wxWidgets_LIB_DIR} (ensure this path is definitely correct if you get an error after here!)")

# add wxWidgets include directories to cmake inclue_directories
include_directories(
    ${wxWidgets_INCLUDE_DIRS}
      )

# add wxWidgets library directories to cmake link_directories
link_directories(${wxWidgets_LIB_DIR})

# Find wxWidgets for linking
find_package(wxWidgets 3.2 REQUIRED COMPONENTS ${wxCOMPONENTS})
find_package(${COMPONENTS} REQUIRED)
if (wxWidgets_FOUND)
    message(STATUS "wxWidgets assets found by CMake in ${wxWidgets_ROOT_DIR}")
    include(${wxWidgets_USE_FILE})
else()
    message(FATAL_ERROR "wxWidgets assets not foundby CMake! (Check values of wxWidgets_ROOT_DIR, wxWidgets_BUILT_LIB_DIR, wxWidgets_CONFIGURATION)")
endif()

# add sources to executable
add_executable(${projectName} WIN32 ${SOURCES})

target_include_directories(${projectName} PRIVATE ${wxWidgets_INCLUDE_DIRS})
target_link_libraries(${projectName} ${wxWidgets_LIBRARIES})
target_link_libraries(${projectName} ${COMPONENTS})

# Handle project resources...
# Define the source and destination resource directories
set(RESOURCE_SOURCE_DIR 
      "${CMAKE_SOURCE_DIR}/icons"
      )
set(RESOURCE_DEST_DIR 
      "${CMAKE_BINARY_DIR}/icons"
      )
# Create a custom target to copy the resources recursively
add_custom_target(copy_resources ALL
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${RESOURCE_SOURCE_DIR} ${RESOURCE_DEST_DIR}
    COMMENT "Copying project's resource files recursively to the build directory..."
)

# # Create a custom command to clean the destination directory
add_custom_command(TARGET copy_resources PRE_BUILD
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${RESOURCE_DEST_DIR}
    COMMENT "Removing outdated project resource files from the build directory..."
)

# # Add a custom command to copy the resources recursively
add_custom_command(TARGET copy_resources POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${RESOURCE_SOURCE_DIR} ${RESOURCE_DEST_DIR}
    COMMENT "Copying project's resource files recursively to the build directory..."
)

# Dynamic Linked Build for wWidgets - Copy required DLLs to the build folder
# Only uncomment the section below if you want to build dynamically linked executable of your project

if(wxWidgets_USE_STATIC)
    # Static Linked Build for wxWidgets - Copy required DLLs to the build folder
    # Only uncomment the section below if you want to build statically linked executable of your project

    # !! - you probably need to alter this: DLL_SUFFIX - set the suffix of the DLLs in your lib directory (this is usually the wxWidgets lib/gcc_x64_dll directory)
    set (DLL_SUFFIX "_gcc_custom.dll")

    # loop to find and copy the required DLLs to the build directory
    foreach(dll ${wxWidgets_LIBRARIES})
        get_filename_component(dll_path ${dll} DIRECTORY)
        get_filename_component(dll_name ${dll} NAME_WE)
        if (dll_name MATCHES "^lib")
            message(STATUS "DLL Path: ${dll_path}, DLL Name: ${dll_name}")
            string(REGEX REPLACE "^lib" "" dll_name ${dll_name})
            set(dll_file "${dll_path}/${dll_name}${DLL_SUFFIX}")
            message(STATUS "Found DLL file: ${dll_file}")
            if(EXISTS ${dll_file})
                message(STATUS "Setting up copy command for DLL: ${dll_file}")
                add_custom_command(TARGET ${projectName} POST_BUILD
                    COMMAND ${CMAKE_COMMAND} -E copy_if_different
                    ${dll_file}
                    $<TARGET_FILE_DIR:${projectName}>
                    COMMENT "Copying required DLL: ${dll_file} to build/"
                )
            else()
                message(WARNING "DLL file not found: ${dll_file}")
            endif()
        endif()
    endforeach()
endif()

# # Ensure the resources are copied before building the executable
add_dependencies(${projectName} copy_resources)