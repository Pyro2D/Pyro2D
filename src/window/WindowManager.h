#ifndef PYRO2D_WINDOWMANAGER_H
#define PYRO2D_WINDOWMANAGER_H

#include <SFML/Graphics.hpp>

#include "PyroWindow.h"

namespace Pyro {
    namespace Window {
        class WindowManager {
        private:
            sf::Window window;
            std::shared_ptr<PyroWindow> pyroWindow;

        public:
            WindowManager();

            void open();
            bool isOpen();
            void handleEvents();
            void update();
            void display();

            std::shared_ptr<PyroWindow> getPyroWindow() {
                return pyroWindow;
            }
        };
    }
}


#endif //PYRO2D_WINDOWMANAGER_H
