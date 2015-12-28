#ifndef PYRO2D_WINDOW_H
#define PYRO2D_WINDOW_H

#include <string>

#include <boost/python.hpp>

#include "WindowHandle.h"

namespace py = boost::python;

class Window {
private:
    std::string title;
    int windowWidth;
    int windowHeight;

public:
    Window();

    void setTitle(std::string);
    void setSize(int, int);
    void start(WindowHandle&);

    int getWidth() const {
        return windowWidth;
    }

    int getHeight() const {
        return windowHeight;
    }

    void setWindowWidth(int windowWidth) {
        Window::windowWidth = windowWidth;
    }

    void setWindowHeight(int windowHeight) {
        Window::windowHeight = windowHeight;
    }

    std::string getTitle() const {
        return title;
    }
};

#endif //PYRO2D_WINDOW_H
