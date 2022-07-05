cmake_minimum_required(VERSION ${CMAKE_MINIMUM_REQUIRED_VERSION})

project(${HELA3D_BUSINESS})

file(GLOB HEADERS
        ./include/hela3D.Business/*.h
        ./include/hela3D.Business/*/*.h)

file(GLOB SOURCES
        ./src/hela3D.Business/*)

add_library(${HELA3D_BUSINESS} SHARED ${SOURCES} ${HEADERS})

target_include_directories(${HELA3D_BUSINESS} PUBLIC ./include PRIVATE ./src)

target_compile_definitions(${HELA3D_BUSINESS} PRIVATE HELA3D_BUSINESS=1)
