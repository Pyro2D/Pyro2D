#ifndef PYRO2D_SCENENODE_H
#define PYRO2D_SCENENODE_H

#include <string>
#include <vector>
#include <boost/smart_ptr/shared_ptr.hpp>

#include "../SceneElement.h"

namespace Pyro {
    namespace Scene {
        namespace Element {
            class SceneNode : public SceneElement {
            private:
                float x;
                float y;

                std::vector<SceneElement*> elements;

            public:
                SceneNode(std::string name) : SceneElement(name) { }

                void addElement(Pyro::Scene::SceneElement* element);

                virtual void draw(boost::shared_ptr<Window::PyroWindow> window);
                virtual void update(float delta);

                virtual float getPositionX();
                virtual void setPositionX(float x);
                virtual float getPositionY();
                virtual void setPositionY(float y);

                static boost::shared_ptr<SceneNode> initWrapper(std::string name);
            };
        }
    }
}


#endif //PYRO2D_SCENENODE_H
