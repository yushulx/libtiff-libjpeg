cmake_minimum_required (VERSION 2.6)
project (demo)
MESSAGE( STATUS "PROJECT_NAME: " ${PROJECT_NAME} )

link_directories("${PROJECT_SOURCE_DIR}/lib") 
include_directories("${PROJECT_SOURCE_DIR}/include/")

# Add the executable
add_executable(demo demo.cxx)
target_link_libraries (demo "tiff")

add_custom_command(TARGET demo POST_BUILD 
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${PROJECT_SOURCE_DIR}/lib/tiff.dll"              
        $<TARGET_FILE_DIR:demo>)