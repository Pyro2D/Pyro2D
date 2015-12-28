#ifndef PYRO2D_WINDOWHANDLECALLBACK_H
#define PYRO2D_WINDOWHANDLECALLBACK_H

#include <boost/python.hpp>

#include "WindowHandle.h"

namespace py = boost::python;

class WindowHandleCallback : public WindowHandle {
public:
    WindowHandleCallback(PyObject* p) : self(p) {}

    void run() { return py::call_method<void>(self, "run"); }

    PyObject* self;
};

#endif //PYRO2D_WINDOWHANDLECALLBACK_H
