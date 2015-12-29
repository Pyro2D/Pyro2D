#ifndef PYRO2D_PYROWINDOW_H
#define PYRO2D_PYROWINDOW_H

#include <string>

#include <boost/python.hpp>
#include <SFML/Graphics/Drawable.hpp>

#include "Window.h"
#include "../scene/Scene.h"

namespace py = boost::python;

namespace Pyro {
    namespace Window {

        class PyroWindow {
        private:
            std::string title;
            unsigned int windowWidth;
            unsigned int windowHeight;

            WindowManager* manager;

            boost::shared_ptr<Scene::SceneGraph> graph;
            boost::shared_ptr<PyroWindow> self;

            bool reloadGame;

        public:
            PyroWindow(WindowManager *manager);

            void setTitle(std::string);
            void setSize(unsigned int, unsigned int);
            void start(WindowHandle&);
            void draw(sf::Drawable& draw);
            void cleanup();

            unsigned int getWidth() const {
                return windowWidth;
            }

            unsigned int getHeight() const {
                return windowHeight;
            }

            void setWindowWidth(unsigned int windowWidth);
            void setWindowHeight(unsigned int windowHeight);

            bool getReloadGame() { return reloadGame; }

            std::string getTitle() {
                return title;
            }

            boost::shared_ptr<Scene::SceneGraph> getSceneGraph() { return this->graph; }

            boost::shared_ptr<PyroWindow> getSelf() {
                return self;
            }

            void setSelf(boost::shared_ptr<PyroWindow> self) {
                this->self = self;
            }
        };
    }
}


#endif //PYRO2D_PYROWINDOW_H
