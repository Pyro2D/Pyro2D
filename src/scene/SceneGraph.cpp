#include <system_error>
#include "SceneGraph.h"

#include <iostream>

using namespace Pyro::Scene;

SceneGraph::SceneGraph() : SceneElement("SceneGraph"), elements() {

}

SceneGraph::~SceneGraph() {

}

void SceneGraph::draw() {
    for(auto element: elements) {
        element->draw();
    }
}

void SceneGraph::update(float delta) {
    for(auto element: elements) {
        element->update(delta);
    }
}

void SceneGraph::addElement(SceneElement* element) {
    std::cout << "Add element to scene graph " << std::endl;

    element->init(boost::shared_ptr<SceneElement>(this));
    elements.push_back(element);
}

void SceneGraph::init(SceneElement *parent) {
    throw std::logic_error("You can't add a scene graph.");
}

float SceneGraph::getPositionX() {
    return baseX;
}

float SceneGraph::getPositionY() {
    return baseY;
}
