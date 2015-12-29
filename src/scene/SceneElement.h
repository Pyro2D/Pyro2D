#ifndef PYRO2D_SCENEELEMENT_H
#define PYRO2D_SCENEELEMENT_H

#include <boost/shared_ptr.hpp>

#include "../util/Drawable.h"
#include "../util/Updateable.h"

namespace Pyro {
    namespace Scene {
        class SceneElement : public Util::Drawable, public Util::Updateable {
        protected:
            boost::shared_ptr<SceneElement> parent;
            std::string name;
        public:
            SceneElement(std::string name) { this->name = name; }

            virtual void draw() = 0;
            virtual void update(float delta) = 0;

            virtual void init(boost::shared_ptr<SceneElement> parent) {
                this->parent = parent;
            };

            virtual float getPositionX() = 0;
            virtual float getPositionY() = 0;
        };
    }
}

#endif //PYRO2D_SCENEELEMENT_H
