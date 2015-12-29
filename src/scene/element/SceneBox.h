#ifndef PYRO2D_SCENEBOX_H
#define PYRO2D_SCENEBOX_H

#include <string>
#include <boost/smart_ptr/shared_ptr.hpp>

#include "../SceneElement.h"

namespace Pyro {
    namespace Scene {
        namespace Element {
            class SceneBox : public SceneElement {
            private:
                float x;
                float y;
            public:
                SceneBox(std::string name, float x, float y);


                virtual void draw();
                virtual void update(float delta);
                virtual float getPositionX();
                virtual float getPositionY();

                static boost::shared_ptr<SceneBox> initWrapper(std::string name, float x, float y);
            };
        }
    }
}


#endif //PYRO2D_SCENEBOX_H
