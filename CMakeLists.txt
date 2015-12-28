cmake_minimum_required(VERSION 3.3)

set(EXECUTABLE_NAME "Pyro2D")

project(${EXECUTABLE_NAME})

# Python Libs
find_package(PythonLibs 2.7 REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

# Boost Dependency
find_package(Boost 1.50 REQUIRED COMPONENTS system filesystem python)
include_directories(${Boost_INCLUDE_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/Window.cpp src/Window.h src/WindowHandle.h src/WindowHandleCallback.h)
add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})

# Link executable with dependencies
target_link_libraries(${EXECUTABLE_NAME} ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})