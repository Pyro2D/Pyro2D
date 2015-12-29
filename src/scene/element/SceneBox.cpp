#include "SceneBox.h"

using namespace Pyro::Scene::Element;

SceneBox::SceneBox(std::string name, float x, float y) : SceneElement(name) {
    this->x = x;
    this->y = y;
}

void SceneBox::draw() {

}

void SceneBox::update(float delta) {

}

float SceneBox::getPositionX() {
    return x;
}

float SceneBox::getPositionY() {
    return y;
}

boost::shared_ptr<SceneBox> SceneBox::initWrapper(std::string name, float x, float y) {
    return boost::shared_ptr<SceneBox>(new SceneBox(name, x, y));
}
