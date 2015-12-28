#include <iostream>
#include <stdio.h>

#include <boost/python.hpp>
#include <boost/filesystem.hpp>

#include "Window.h"
#include "WindowHandle.h"
#include "WindowHandleCallback.h"

using namespace std;

namespace py = boost::python;

BOOST_PYTHON_MODULE(Pyro) {
    using namespace boost::python;

    class_<Window>("Window")
            .add_property("title", &Window::getTitle, &Window::setTitle)
            .add_property("width", &Window::getWidth, &Window::setWindowWidth)
            .add_property("height", &Window::getHeight, &Window::setWindowHeight)
            .def("start", &Window::start);

    class_<WindowHandle, boost::noncopyable, boost::shared_ptr<WindowHandleCallback>>("WindowHandle")
            .def("run", &WindowHandle::run);

    implicitly_convertible<auto_ptr<WindowHandleCallback>, auto_ptr<WindowHandle> >();
}

int main() {

    Py_Initialize();
    initPyro();

    boost::filesystem::path workingDir = boost::filesystem::absolute("./").normalize();
    PyObject* sysPath = PySys_GetObject("path");
    PyList_Insert( sysPath, 0, PyString_FromString(workingDir.string().c_str()));

    FILE* mainFile;
    mainFile = fopen("main.py", "r");
    if(!mainFile) {
        cout << "Failed to open game source... Please contact the game owner." << endl;
        return 0;
    }

    Window* mainWindow = new Window();

    py::object main_module((py::handle<>(py::borrowed(PyImport_AddModule("__main__")))));
    py::object main_namespace = main_module.attr("__dict__");

    try {
        py::object main(py::exec_file("main.py", main_namespace, main_namespace));

        main_namespace["init"](mainWindow);
    } catch (py::error_already_set const & e) {
        PyErr_Print();
    }

    Py_Finalize();

    return 0;
}