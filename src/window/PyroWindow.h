#ifndef PYRO2D_PYROWINDOW_H
#define PYRO2D_PYROWINDOW_H

#include <string>

#include <boost/python.hpp>

#include "Window.h"
#include "../scene/SceneGraph.h"

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

        public:
            PyroWindow(WindowManager *manager);

            void setTitle(std::string);
            void setSize(unsigned int, unsigned int);
            void start(WindowHandle&);

            unsigned int getWidth() const {
                return windowWidth;
            }

            unsigned int getHeight() const {
                return windowHeight;
            }

            void setWindowWidth(unsigned int windowWidth);
            void setWindowHeight(unsigned int windowHeight);

            std::string getTitle() {
                return title;
            }

            boost::shared_ptr<Scene::SceneGraph> getSceneGraph() { return this->graph; }
        };
    }
}


#endif //PYRO2D_PYROWINDOW_H
