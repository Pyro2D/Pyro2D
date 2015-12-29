#ifndef PYRO2D_DRAWABLE_H
#define PYRO2D_DRAWABLE_H

#include "../window/Window.h"

namespace Pyro {
    namespace Util {
        class Drawable {
        public:
            virtual void draw(boost::shared_ptr<Window::PyroWindow> window) = 0;
        };
    }
}

#endif //PYRO2D_DRAWABLE_H
