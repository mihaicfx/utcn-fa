cmake_minimum_required(VERSION 3.5)
project (project01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(COMMON_DIR "../common")
set(SOURCES
    main.cpp
    direct_sort.cpp
)
file(GLOB HEADERS
    *.h
    ${COMMON_DIR}/*.h
)

add_executable(lab01 ${SOURCES} ${HEADERS})

target_include_directories(lab01 PRIVATE ${COMMON_DIR})