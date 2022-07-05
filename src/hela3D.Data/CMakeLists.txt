cmake_minimum_required(VERSION ${CMAKE_MINIMUM_REQUIRED_VERSION})

project(${HELA3D_DATA} VERSION ${HELA3D_DATA_VERSION})

file(GLOB HEADERS
		./include/hela3D.Data/*.h
		./include/hela3D.Data/Repositories/*.h)

file(GLOB SOURCES
		./src/hela3D.Data/*.cpp
		./src/hela3D.Data/Repositories/*.cpp)

add_library(${HELA3D_DATA} SHARED ${SOURCES} ${HEADERS})

target_include_directories(${HELA3D_DATA} PUBLIC ./include PRIVATE ./src)

target_link_libraries(${HELA3D_DATA} PRIVATE ${HELA3D_BUSINESS})

target_compile_definitions(${HELA3D_DATA} PRIVATE HELA3D_DATA=1)
