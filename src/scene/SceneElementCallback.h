#ifndef PYRO2D_SCENEELEMENTCALLBACK_H
#define PYRO2D_SCENEELEMENTCALLBACK_H

#include <string>

#include <boost/python.hpp>

#include "SceneElement.h"

namespace py = boost::python;

namespace Pyro {
    namespace Scene {
        class SceneElementCallback : public SceneElement {
        public:
            SceneElementCallback(PyObject* p, std::string name) : SceneElement(name), self(p) { }

            virtual void draw(boost::shared_ptr<Window::PyroWindow> window) {
                return py::call_method<void, boost::shared_ptr<Window::PyroWindow>>(self, "draw", window);
            }

            virtual void update(float delta) {
                return py::call_method<void, float>(self, "update", delta);
            }

            virtual float getPositionX() {
                return py::call_method<float>(self, "getPositionX");
            }

            virtual float getPositionY() {
                return py::call_method<float>(self, "getPositionY");
            }

            virtual void setPositionX(float x) {
                return py::call_method<void, float>(self, "setPositionX", x);
            }

            virtual void setPositionY(float y) {
                return py::call_method<void, float>(self, "setPositionY", y);
            }

            PyObject* self;
        };
    }
}

#endif //PYRO2D_SCENEELEMENTCALLBACK_H
