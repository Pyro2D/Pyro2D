#ifndef PYRO2D_INPUTMODULE_H
#define PYRO2D_INPUTMODULE_H

#include <boost/python.hpp>

namespace Pyro {
    namespace Python {

        bool isKeyDown(unsigned char key) {
            return sf::Keyboard::isKeyPressed((sf::Keyboard::Key)key);
        }

        BOOST_PYTHON_MODULE(Input) {
            using namespace boost::python;

            def("isKeyDown", &isKeyDown);

            scope().attr("KEY_ARROW_UP") = (unsigned char)sf::Keyboard::Key::Up;
            scope().attr("KEY_ARROW_DOWN") = (unsigned char)sf::Keyboard::Key::Down;
        }

    }
}

#endif //PYRO2D_INPUTMODULE_H
