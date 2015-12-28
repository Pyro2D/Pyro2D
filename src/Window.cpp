#include "Window.h"

Window::Window() : title("Pyro2D Game Engine"), windowWidth(800), windowHeight(600) {

}

void Window::setTitle(std::string title) {
    this->title = title;
}

void Window::setSize(int width, int height) {
    this->windowWidth = width;
    this->windowHeight = height;
}

void Window::start(WindowHandle& handle) {
    try {
        handle.run();
    } catch (py::error_already_set const & e) {
        std::cout << "Error while calling run method" << std::endl;
        PyErr_Print();
    }
}
