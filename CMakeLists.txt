cmake_minimum_required(VERSION 2.8)

set(EXECUTABLE_NAME "Pyro2D")

project(${EXECUTABLE_NAME})

# Add Pyro2D cmake modules (like sfml, etc)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

# Python Libs
find_package(PythonLibs 2.7 REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

# Boost Dependency
find_package(Boost 1.50 REQUIRED COMPONENTS system filesystem python)
include_directories(${Boost_INCLUDE_DIR})

# SFML Dependency
find_package(SFML 2.3 REQUIRED system window graphics network audio)
include_directories(${SFML_INCLUDE_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/window/PyroWindow.cpp src/window/PyroWindow.h src/window/WindowHandle.h src/window/WindowHandleCallback.h src/window/WindowManager.cpp src/window/WindowManager.h src/window/Window.h src/scene/SceneGraph.cpp src/scene/SceneGraph.h src/scene/Scene.h src/util/Util.h src/util/Drawable.h src/util/Updateable.h src/scene/SceneElement.h src/scene/element/Element.h src/scene/element/SceneNode.cpp src/scene/element/SceneNode.h src/scene/element/SceneBox.cpp src/scene/element/SceneBox.h src/python/PyroModule.h src/python/SceneModule.h src/scene/SceneElementCallback.h src/python/InputModule.h)
add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})

# Link executable with dependencies
target_link_libraries(${EXECUTABLE_NAME} ${Boost_LIBRARIES} ${PYTHON_LIBRARIES} ${SFML_LIBRARIES})