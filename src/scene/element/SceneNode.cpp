#include "SceneNode.h"

using namespace Pyro::Scene::Element;

void SceneNode::draw() {
    for(auto element: elements) {
        element->draw();
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
    element->init(boost::shared_ptr<Pyro::Scene::SceneElement>(this));
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
