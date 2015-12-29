#include <iostream>
#include <stdio.h>

#include <boost/python.hpp>
#include <boost/filesystem.hpp>

#include "window/WindowManager.h"
#include "python/PyroModule.h"
#include "python/SceneModule.h"

using namespace std;

namespace py = boost::python;
namespace pywin = Pyro::Window;

int main() {

    Py_Initialize();
    Pyro::Python::initPyro();
    Pyro::Python::initScene();

    boost::filesystem::path workingDir = boost::filesystem::absolute("./").normalize();
    PyObject* sysPath = PySys_GetObject("path");
    PyList_Insert( sysPath, 0, PyString_FromString(workingDir.string().c_str()));

    FILE* mainFile;
    mainFile = fopen("main.py", "r");
    if(!mainFile) {
        cout << "Failed to open game source... Please contact the game owner." << endl;
        return 0;
    }

    //Window* mainWindow = new Window();
    pywin::WindowManager* windowManager = new pywin::WindowManager();

    py::object main_module((py::handle<>(py::borrowed(PyImport_AddModule("__main__")))));
    py::object main_namespace = main_module.attr("__dict__");

    try {
        py::object main(py::exec_file("main.py", main_namespace, main_namespace));

        main_namespace["init"](windowManager->getPyroWindow());
    } catch (py::error_already_set const & e) {
        PyErr_Print();
    }

    Py_Finalize();

    return 0;
}