#ifndef PYRO2D_WINDOWHANDLECALLBACK_H
#define PYRO2D_WINDOWHANDLECALLBACK_H

#include <boost/python.hpp>

#include "WindowHandle.h"

namespace py = boost::python;

namespace Pyro {
    namespace Window {
        class WindowHandleCallback : public WindowHandle {
        public:
            WindowHandleCallback(PyObject* p) : self(p) {}

            void run(float delta) { return py::call_method<void, float>(self, "run", delta); }

            PyObject* self;
        };
    }
}

#endif //PYRO2D_WINDOWHANDLECALLBACK_H
