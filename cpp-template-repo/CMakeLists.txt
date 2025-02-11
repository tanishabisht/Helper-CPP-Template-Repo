cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyCppProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory
include_directories(include)

# Add the source files
file(GLOB SOURCES "src/*.cpp")
file(GLOB TEST_SOURCES "tests/*.cpp")

# Add the executable
add_executable(MyCppProject ${SOURCES} ${TEST_SOURCES})

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

target_link_libraries(MyCppProject ${GTEST_LIBRARIES} pthread)
