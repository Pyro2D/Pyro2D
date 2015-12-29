#include <SFML/Graphics/RectangleShape.hpp>
#include "SceneBox.h"
#include "../../window/PyroWindow.h"

using namespace Pyro::Scene::Element;

SceneBox::SceneBox(std::string name, float x, float y, float width, float height) :
        SceneElement(name),
        shape(sf::Vector2f(width, height)) {
    this->x = x;
    this->y = y;

    this->shape.setPosition(x, y);
}

void SceneBox::draw(boost::shared_ptr<Window::PyroWindow> window) {
    window->draw(shape);
}

void SceneBox::update(float delta) {

}

float SceneBox::getPositionX() {
    return x;
}

float SceneBox::getPositionY() {
    return y;
}

boost::shared_ptr<SceneBox> SceneBox::initWrapper(std::string name, float x, float y, float width, float height) {
    return boost::shared_ptr<SceneBox>(new SceneBox(name, x, y, width, height));
}

void SceneBox::setPositionX(float x) {
    this->x = x;

    this->shape.setPosition(this->x, this->y);
}

void SceneBox::setPositionY(float y) {
    this->y = y;

    this->shape.setPosition(this->x, this->y);
}
