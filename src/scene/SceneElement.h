#ifndef PYRO2D_SCENEELEMENT_H
#define PYRO2D_SCENEELEMENT_H

#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>

#include "../util/Drawable.h"
#include "../util/Updateable.h"
#include "../window/Window.h"

namespace Pyro {
    namespace Scene {
        class SceneElement : public Util::Drawable, public Util::Updateable, public boost::enable_shared_from_this<SceneElement> {
        protected:
            boost::shared_ptr<SceneElement> parent;
            std::string name;
        public:
            SceneElement(std::string name) { this->name = name; }

            virtual void draw(boost::shared_ptr<Window::PyroWindow> window) = 0;
            virtual void update(float delta) = 0;

            virtual void init(boost::shared_ptr<SceneElement> parent) {
                this->parent = parent;
            };

            virtual float getPositionX() = 0;
            virtual void setPositionX(float x) = 0;
            virtual float getPositionY() = 0;
            virtual void setPositionY(float y) = 0;

            std::string getName() { return name; }
            void setName(std::string name) { this->name = name; }
        };
    }
}

#endif //PYRO2D_SCENEELEMENT_H
