cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyCppProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory
include_directories(include)

# Add the source files
file(GLOB COMPONENT_SOURCES "src/Calculator.cpp" "src/Logger.cpp" "src/Notifier.cpp")
file(GLOB MAIN_SOURCE "src/main.cpp")
file(GLOB TEST_SOURCES "tests/*.cpp")

add_library(MyComponents STATIC ${COMPONENT_SOURCES})

# Add the project executable
add_executable(MyCppProject ${MAIN_SOURCE})
target_link_libraries(MyCppProject PRIVATE MyComponents)

# set(GTEST_ROOT /opt/homebrew/Cellar/googletest/1.16.0)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()
add_executable(MyCppProjectTests ${TEST_SOURCES})
target_link_libraries(MyCppProjectTests 
    PRIVATE
        MyComponents
        GTest::gtest
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(MyCppProjectTests)

