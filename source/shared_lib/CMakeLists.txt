cmake_minimum_required(VERSION 3.0)

project(
    synapse-networking-dll
    VERSION 0.1.0
    LANGUAGES C
)

file(
    GLOB_RECURSE
    src_synapse_networking_dll
    CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
)

add_library(
    synapse_networking_dll
    SHARED
    ${src_synapse_networking_dll}
)

target_include_directories(
    synapse_networking_dll
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../../include
)

target_compile_options(
    synapse_networking_dll 
    PRIVATE 
    /Dsynapse_networking_export_mode
)

target_link_libraries(
    synapse_networking_dll
    synapse_networking_lib
    synapse_memory_dll
    ws2_32.lib
)