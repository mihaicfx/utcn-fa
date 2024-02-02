cmake_minimum_required(VERSION 3.5)
project (project01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(COMMON_DIR "../common")
set(SOURCES
    main.cpp
    demo.cpp
)
file(GLOB HEADERS
    *.h
    ${COMMON_DIR}/*.h
)

add_executable(lab00 ${SOURCES} ${HEADERS})

target_include_directories(lab00 PRIVATE ${COMMON_DIR})