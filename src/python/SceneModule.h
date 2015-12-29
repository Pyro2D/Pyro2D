#ifndef PYRO2D_SCENEMODULE_H
#define PYRO2D_SCENEMODULE_H

#include <boost/python.hpp>

#include "../scene/SceneElement.h"
#include "../scene/SceneElementCallback.h"
#include "../scene/SceneGraph.h"
#include "../scene/element/SceneBox.h"
#include "../scene/element/SceneNode.h"

namespace pyscene = Pyro::Scene;

namespace Pyro {
    namespace Python {

        BOOST_PYTHON_MODULE(Scene) {
            using namespace boost::python;

            class_<pyscene::SceneGraph, boost::shared_ptr<pyscene::SceneGraph>>("Graph", no_init)
                    .def("addElement", &pyscene::SceneGraph::addElement)
                    .add_property("x", &pyscene::SceneGraph::getPositionX)
                    .add_property("y", &pyscene::SceneGraph::getPositionY);

            class_<pyscene::SceneElement, boost::noncopyable, boost::shared_ptr<pyscene::SceneElementCallback>>("Element", py::init<std::string>())
                    .def("draw", &pyscene::SceneElement::draw)
                    .def("update", &pyscene::SceneElement::update)
                    .def("init", &pyscene::SceneElement::init)
                    .add_property("x", &pyscene::SceneElement::getPositionX)
                    .add_property("y", &pyscene::SceneElement::getPositionY);

            class_<pyscene::Element::SceneNode, bases<pyscene::SceneElement>>("Node", no_init)
                    .def("__init__", make_constructor(&pyscene::Element::SceneNode::initWrapper))
                    .def("addElement", &pyscene::Element::SceneNode::addElement)
                    .add_property("x", &pyscene::SceneGraph::getPositionX)
                    .add_property("y", &pyscene::SceneGraph::getPositionY);

            class_<pyscene::Element::SceneBox, bases<pyscene::SceneElement>>("Box", no_init)
                    .def("__init__", make_constructor(&pyscene::Element::SceneBox::initWrapper));

            implicitly_convertible<std::auto_ptr<pyscene::SceneElementCallback>, std::auto_ptr<pyscene::SceneElement> >();
            implicitly_convertible<std::auto_ptr<pyscene::Element::SceneBox>, std::auto_ptr<pyscene::SceneElement> >();
        }

    }
}

#endif //PYRO2D_SCENEMODULE_H
