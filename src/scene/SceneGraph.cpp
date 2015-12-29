#include <system_error>
#include "SceneGraph.h"

#include <iostream>

using namespace Pyro::Scene;

SceneGraph::SceneGraph() : SceneElement("SceneGraph"), elements() {

}

void SceneGraph::draw(boost::shared_ptr<Window::PyroWindow> window) {
    for(auto element: elements) {
        element->draw(window);
    }
}

void SceneGraph::update(float delta) {
    for(auto element: elements) {
        element->update(delta);
    }
}

void SceneGraph::addElement(boost::shared_ptr<SceneElement> element) {
    std::cout << "Add element to scene graph " << std::endl;

    element->init(shared_from_this());
    elements.push_back(element);
}

void SceneGraph::init(boost::shared_ptr<SceneElement>) {
    throw std::logic_error("You can't add a scene graph.");
}

float SceneGraph::getPositionX() {
    return baseX;
}

float SceneGraph::getPositionY() {
    return baseY;
}

void SceneGraph::cleanup() {
    elements.clear();
}

void SceneGraph::setPositionX(float x) {
    this->baseX = x;
}

void SceneGraph::setPositionY(float y) {
    this->baseY = y;
}
