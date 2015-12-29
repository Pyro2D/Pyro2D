#include "WindowManager.h"

using namespace Pyro::Window;

WindowManager::WindowManager() : window() {
    pyroWindow = std::shared_ptr<PyroWindow>(new PyroWindow(this));
    pyroWindow->setSelf(boost::shared_ptr<PyroWindow>(pyroWindow.get()));
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

    window.clear(sf::Color::Black);
}

void WindowManager::open() {
    window.create(sf::VideoMode(pyroWindow->getWidth(), pyroWindow->getHeight()), pyroWindow->getTitle());
}

void WindowManager::display() {
    window.display();
}

void WindowManager::draw(sf::Drawable& drawable) {
    window.draw(drawable);
}

void WindowManager::cleaup() {
    pyroWindow->cleanup();
}
