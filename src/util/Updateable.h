#ifndef PYRO2D_UPDATEABLE_H
#define PYRO2D_UPDATEABLE_H

namespace Pyro {
    namespace Util {
        class Updateable {
        public:
            virtual void update(float delta) = 0;
        };
    }
}

#endif //PYRO2D_UPDATEABLE_H
