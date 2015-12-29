#include "WindowManager.h"

using namespace Pyro::Window;

WindowManager::WindowManager() : window() {
    pyroWindow = std::shared_ptr<PyroWindow>(new PyroWindow(this));
}

void WindowManager::update() {
    sf::Vector2u size = sf::Vector2u(pyroWindow->getWidth(), pyroWindow->getHeight());
    window.setSize(size);
}

bool WindowManager::isOpen() {
    return window.isOpen();
}

void WindowManager::handleEvents() {
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void WindowManager::open() {
    window.create(sf::VideoMode(pyroWindow->getWidth(), pyroWindow->getHeight()), pyroWindow->getTitle());
}

void WindowManager::display() {
    window.display();
}
