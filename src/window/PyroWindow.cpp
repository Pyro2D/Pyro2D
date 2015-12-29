#include "PyroWindow.h"
#include "WindowManager.h"
#include "WindowHandle.h"
#include "../scene/SceneGraph.h"

using namespace Pyro::Window;

PyroWindow::PyroWindow(WindowManager* manager) :
        title("Pyro2D Game Engine"), windowWidth(800), windowHeight(600) {
    this->manager = manager;
    this->graph = boost::shared_ptr<Scene::SceneGraph>(new Scene::SceneGraph());
}

void PyroWindow::setTitle(std::string title) {
    this->title = title;

    manager->update();
}

void PyroWindow::setSize(unsigned int width, unsigned int height) {
    this->windowWidth = width;
    this->windowHeight = height;

    manager->update();
}

void PyroWindow::start(WindowHandle& handle) {
    try {
        manager->open();

        sf::Clock deltaClock;
        while(manager->isOpen()) {
            sf::Time dt = deltaClock.restart();

            manager->handleEvents();

            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::F12)) {
                reloadGame = true;
                break;
            }

            handle.run(dt.asSeconds());
            graph->draw(self);
            graph->update(dt.asSeconds()); //todo

            manager->display();
        }
    } catch (py::error_already_set const & e) {
        std::cout << "Error while calling run method" << std::endl;
        PyErr_Print();
    }
}

void PyroWindow::setWindowWidth(unsigned int windowWidth) {
    PyroWindow::windowWidth = windowWidth;
    manager->update();
}

void PyroWindow::setWindowHeight(unsigned int windowHeight) {
    PyroWindow::windowHeight = windowHeight;
    manager->update();
}

void PyroWindow::draw(sf::Drawable& drawable) {
    manager->draw(drawable);
}

void PyroWindow::cleanup() {
    this->graph->cleanup();
}
