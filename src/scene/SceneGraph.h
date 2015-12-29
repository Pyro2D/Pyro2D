#ifndef PYRO2D_SCENEGRAPH_H
#define PYRO2D_SCENEGRAPH_H

#include <vector>

#include "Scene.h"
#include "SceneElement.h"
#include "../util/Drawable.h"
#include "../util/Updateable.h"

namespace Pyro {
    namespace Scene {
        class SceneGraph : public SceneElement {
        private:
            std::vector<SceneElement*> elements;
            float baseX;
            float baseY;
        public:
            SceneGraph();
            ~SceneGraph();

            void addElement(SceneElement* element);

            virtual void draw();
            virtual void update(float delta);



            virtual void init(SceneElement *parent);

            virtual float getPositionX();

            virtual float getPositionY();
        };
    }
}


#endif //PYRO2D_SCENEGRAPH_H
