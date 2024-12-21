cmake_minimum_required(VERSION 3.5)

# Settings
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_BUILD_PARALLEL_LEVEL 12)

set(ProjectName CPPBP)
project(${ProjectName})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)


# Sources
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Include 
include_directories(src)

# SPDLOG
add_subdirectory(lib/spdlog)
set_target_properties(spdlog PROPERTIES POSITION_INDEPENDENT_CODE ON)
include_directories(lib/spdlog/include)

# Compile source files
add_executable(${ProjectName} ${SOURCES})

target_link_libraries(${ProjectName} spdlog)
