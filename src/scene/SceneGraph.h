#ifndef PYRO2D_SCENEGRAPH_H
#define PYRO2D_SCENEGRAPH_H

#include <vector>

#include "SceneElement.h"
#include "../util/Drawable.h"
#include "../util/Updateable.h"

namespace Pyro {
    namespace Scene {
        class SceneGraph : public SceneElement {
        private:
            std::vector<boost::shared_ptr<SceneElement>> elements;
            float baseX;
            float baseY;
        public:
            SceneGraph();

            void addElement(boost::shared_ptr<SceneElement> element);
            void cleanup();

            virtual void draw(boost::shared_ptr<Window::PyroWindow> window);
            virtual void update(float delta);
            virtual void init(boost::shared_ptr<SceneElement> parent);
            virtual float getPositionX();
            virtual float getPositionY();
            virtual void setPositionX(float x);
            virtual void setPositionY(float y);
        };
    }
}


#endif //PYRO2D_SCENEGRAPH_H
