cmake_minimum_required(VERSION 3.10)

project(http_server VERSION 1.0)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED True)

include_directories(include)

set(SOURCES
    src/main.c
    src/server.c
    src/handler.c
)

add_executable(http_server ${SOURCES})

target_compile_options(http_server PRIVATE -Wall)

set_target_properties(http_server PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/debug"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/release"
)