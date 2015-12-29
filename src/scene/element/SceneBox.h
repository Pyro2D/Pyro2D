#ifndef PYRO2D_SCENEBOX_H
#define PYRO2D_SCENEBOX_H

#include <string>
#include <boost/smart_ptr/shared_ptr.hpp>
#include <SFML/Graphics.hpp>

#include "../SceneElement.h"

namespace Pyro {
    namespace Scene {
        namespace Element {
            class SceneBox : public SceneElement {
            private:
                float x;
                float y;
                float width;
                float height;

                sf::RectangleShape shape;
            public:
                SceneBox(std::string name, float x, float y, float width, float height);


                virtual void draw(boost::shared_ptr<Window::PyroWindow> window);
                virtual void update(float delta);
                virtual float getPositionX();
                virtual float getPositionY();
                virtual void setPositionX(float x);
                virtual void setPositionY(float y);

                static boost::shared_ptr<SceneBox> initWrapper(std::string name, float x, float y, float width, float height);
            };
        }
    }
}


#endif //PYRO2D_SCENEBOX_H
