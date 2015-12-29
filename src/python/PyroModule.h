#ifndef PYRO2D_PYROMODULE_H
#define PYRO2D_PYROMODULE_H

#include <boost/python.hpp>

#include "../window/PyroWindow.h"
#include "../window/WindowHandleCallback.h"
#include "../window/WindowHandle.h"

namespace py = boost::python;
namespace pywin = Pyro::Window;

namespace Pyro {
    namespace Python {

        BOOST_PYTHON_MODULE(Pyro) {
                using namespace boost::python;

                class_<pywin::PyroWindow, std::shared_ptr<pywin::PyroWindow>>("Window", no_init)
                        .add_property("graph", &pywin::PyroWindow::getSceneGraph)
                        .add_property("title", &pywin::PyroWindow::getTitle, &pywin::PyroWindow::setTitle)
                        .add_property("width", &pywin::PyroWindow::getWidth, &pywin::PyroWindow::setWindowWidth)
                        .add_property("height", &pywin::PyroWindow::getHeight, &pywin::PyroWindow::setWindowHeight)
                        .def("start", &pywin::PyroWindow::start);

                class_<pywin::WindowHandle, boost::noncopyable, boost::shared_ptr<pywin::WindowHandleCallback>>("WindowHandle")
                        .def("run", &pywin::WindowHandle::run);

                implicitly_convertible<std::auto_ptr<pywin::WindowHandleCallback>, std::auto_ptr<pywin::WindowHandle> >();
        }
    }
}

#endif //PYRO2D_PYROMODULE_H
