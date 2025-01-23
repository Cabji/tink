cmake_minimum_required(VERSION 3.20)
set(projectName "Tink")
set(SOURCES 
      MyApp.cpp
      TinkBase.cpp
      TinkMain.cpp 
      resources.rc
   )

project(${projectName} VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

# wxWidgets specific configuration
set(wxWidgets_CONFIGURATION "mswu")
set(wxWidgets_ROOT_DIR $ENV{WXWIN})
set(wxWidgets_LIB_DIR $ENV{WXWIN}/lib/gcc_x64_dll)
set(wxWidgets_INCLUDE_DIRS
      ${wxWidgets_ROOT_DIR}/include
      ${wxWidgets_LIB_DIR}/mswu
   )

include_directories(
      $ENV{WXWIN}/include
      ${wxWidgets_LIB_DIR}/mswu
      )

link_directories($ENV{WXWIN}/lib/gcc_x64_lib)

set(wxWidgets_USE_STATIC OFF)
set(wxWidgets_USE_UNICODE ON)
set(wxWidgets_USE_WEBVIEW ON)

# Find wxWidgets for static linking
find_package(wxWidgets 3.2 REQUIRED COMPONENTS core base webview)
message(STATUS "wxWidgets_LIBRARIES: ${wxWidgets_LIBRARIES}")

include(${wxWidgets_USE_FILE})

# add sources to executable
add_executable(${projectName} WIN32 ${SOURCES})

target_include_directories(${projectName} PRIVATE ${wxWidgets_INCLUDE_DIRS})
target_link_libraries(${projectName} ${wxWidgets_LIBRARIES})

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

# DLL_SUFFIX - set the suffix of the DLLs in your lib directory (this is usually the wxWidgets lib/gcc_x64_dll directory)
set (DLL_SUFFIX "_gcc_custom.dll")

# loop to find and copy the required DLLs to the build directory
foreach(dll ${wxWidgets_LIBRARIES})
    get_filename_component(dll_path ${dll} DIRECTORY)
    get_filename_component(dll_name ${dll} NAME_WE)
    string(REGEX REPLACE "^lib" "" dll_name ${dll_name})
    message(STATUS "DLL Path: ${dll_path}, DLL Name: ${dll_name}")
    file(GLOB dll_files "${dll_path}/${dll_name}{$DLL_SUFFIX}")
    foreach(dll_file ${dll_files})
        add_custom_command(TARGET ${projectName} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
            ${dll_file}
            $<TARGET_FILE_DIR:${projectName}>
            COMMENT "Copying required DLL: ${dll_file} to build/"
        )
    endforeach()
endforeach()

# # Ensure the resources are copied before building the executable
add_dependencies(${projectName} copy_resources)