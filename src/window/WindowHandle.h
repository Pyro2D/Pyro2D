#ifndef PYRO2D_WINDOWHANDLE_H
#define PYRO2D_WINDOWHANDLE_H

namespace Pyro{
    namespace Window {

        class WindowHandle {
        public:
            virtual void run(float delta) = 0;
        };
    }
}

#endif //PYRO2D_WINDOWHANDLE_H
