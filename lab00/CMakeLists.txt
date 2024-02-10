cmake_minimum_required(VERSION 3.5)
project (project00 LANGUAGES CXX)

set(TARGET main)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(COMMON_DIR "../common")
file(GLOB SOURCES
    *.cpp
)
file(GLOB HEADERS
    *.h
    ${COMMON_DIR}/*.h
)

add_executable(${TARGET} ${SOURCES} ${HEADERS})

target_include_directories(${TARGET} PRIVATE ${COMMON_DIR})