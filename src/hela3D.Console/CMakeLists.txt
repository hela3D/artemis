cmake_minimum_required(VERSION ${CMAKE_MINIMUM_REQUIRED_VERSION})

project(${HELA3D_CONSOLE} VERSION ${HELA3D_CONSOLE_VERSION})

file(GLOB HEADERS
		./src/hela3D.Console/*.h)

file(GLOB SOURCES
		./src/hela3D.Console/*.cpp)

add_executable(${HELA3D_CONSOLE} ${SOURCES} ${HEADERS})

target_link_libraries(${HELA3D_CONSOLE} PRIVATE ${HELA3D_DATA} ${HELA3D_BUSINESS})

target_include_directories(${HELA3D_CONSOLE} PRIVATE ./src)
