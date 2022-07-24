cmake_minimum_required(VERSION 3.0)

project(
    synapse-networking-lib
    VERSION 0.1.0
    LANGUAGES C
)

file(
    GLOB_RECURSE
    src_synapse_networking_lib
    CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
)

add_library(
    synapse_networking_lib
    STATIC
    ${src_synapse_networking_lib}
)

target_include_directories(
    synapse_networking_lib
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../../include
)