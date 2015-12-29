#include "SceneNode.h"

using namespace Pyro::Scene::Element;

void SceneNode::draw(boost::shared_ptr<Window::PyroWindow> window) {
    for(auto element: elements) {
        element->draw(window);
    }
}

void SceneNode::update(float delta) {
    for(auto element: elements) {
        element->update(delta);
    }
}

float SceneNode::getPositionX() {
    return x + this->parent->getPositionX();
}

float SceneNode::getPositionY() {
    return y + this->parent->getPositionY();
}

void SceneNode::addElement(Pyro::Scene::SceneElement* element) {
    element->init(shared_from_this());
    elements.push_back(element);
}

void SceneNode::setPositionX(float x) {
    this->x = x;
}

void SceneNode::setPositionY(float y) {
    this->y = y;
}

boost::shared_ptr<SceneNode> SceneNode::initWrapper(std::string name) {
    return boost::shared_ptr<SceneNode>(new SceneNode(name));
}
