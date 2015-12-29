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

            scope().attr("KEY_A") = (unsigned char)sf::Keyboard::Key::A;
            scope().attr("KEY_B") = (unsigned char)sf::Keyboard::Key::B;
            scope().attr("KEY_C") = (unsigned char)sf::Keyboard::Key::C;
            scope().attr("KEY_D") = (unsigned char)sf::Keyboard::Key::D;
            scope().attr("KEY_E") = (unsigned char)sf::Keyboard::Key::E;
            scope().attr("KEY_F") = (unsigned char)sf::Keyboard::Key::F;
            scope().attr("KEY_G") = (unsigned char)sf::Keyboard::Key::G;
            scope().attr("KEY_H") = (unsigned char)sf::Keyboard::Key::H;
            scope().attr("KEY_I") = (unsigned char)sf::Keyboard::Key::I;
            scope().attr("KEY_J") = (unsigned char)sf::Keyboard::Key::J;
            scope().attr("KEY_K") = (unsigned char)sf::Keyboard::Key::K;
            scope().attr("KEY_L") = (unsigned char)sf::Keyboard::Key::L;
            scope().attr("KEY_M") = (unsigned char)sf::Keyboard::Key::M;
            scope().attr("KEY_N") = (unsigned char)sf::Keyboard::Key::N;
            scope().attr("KEY_O") = (unsigned char)sf::Keyboard::Key::O;
            scope().attr("KEY_P") = (unsigned char)sf::Keyboard::Key::P;
            scope().attr("KEY_Q") = (unsigned char)sf::Keyboard::Key::Q;
            scope().attr("KEY_R") = (unsigned char)sf::Keyboard::Key::R;
            scope().attr("KEY_S") = (unsigned char)sf::Keyboard::Key::S;
            scope().attr("KEY_T") = (unsigned char)sf::Keyboard::Key::T;
            scope().attr("KEY_U") = (unsigned char)sf::Keyboard::Key::U;
            scope().attr("KEY_V") = (unsigned char)sf::Keyboard::Key::V;
            scope().attr("KEY_W") = (unsigned char)sf::Keyboard::Key::W;
            scope().attr("KEY_X") = (unsigned char)sf::Keyboard::Key::X;
            scope().attr("KEY_Y") = (unsigned char)sf::Keyboard::Key::Y;
            scope().attr("KEY_Z") = (unsigned char)sf::Keyboard::Key::Z;
            scope().attr("KEY_NUM0") = (unsigned char)sf::Keyboard::Key::Num0;
            scope().attr("KEY_NUM1") = (unsigned char)sf::Keyboard::Key::Num1;
            scope().attr("KEY_NUM2") = (unsigned char)sf::Keyboard::Key::Num2;
            scope().attr("KEY_NUM3") = (unsigned char)sf::Keyboard::Key::Num3;
            scope().attr("KEY_NUM4") = (unsigned char)sf::Keyboard::Key::Num4;
            scope().attr("KEY_NUM5") = (unsigned char)sf::Keyboard::Key::Num5;
            scope().attr("KEY_NUM6") = (unsigned char)sf::Keyboard::Key::Num6;
            scope().attr("KEY_NUM7") = (unsigned char)sf::Keyboard::Key::Num7;
            scope().attr("KEY_NUM8") = (unsigned char)sf::Keyboard::Key::Num8;
            scope().attr("KEY_NUM9") = (unsigned char)sf::Keyboard::Key::Num9;
            scope().attr("KEY_ESCAPE") = (unsigned char)sf::Keyboard::Key::Escape;
            scope().attr("KEY_LCONTROL") = (unsigned char)sf::Keyboard::Key::LControl;
            scope().attr("KEY_LSHIFT") = (unsigned char)sf::Keyboard::Key::LShift;
            scope().attr("KEY_LALT") = (unsigned char)sf::Keyboard::Key::LAlt;
            scope().attr("KEY_LSYSTEM") = (unsigned char)sf::Keyboard::Key::LSystem;
            scope().attr("KEY_RCONTROL") = (unsigned char)sf::Keyboard::Key::RControl;
            scope().attr("KEY_RSHIFT") = (unsigned char)sf::Keyboard::Key::RShift;
            scope().attr("KEY_RALT") = (unsigned char)sf::Keyboard::Key::RAlt;
            scope().attr("KEY_RSYSTEM") = (unsigned char)sf::Keyboard::Key::RSystem;
            scope().attr("KEY_MENU") = (unsigned char)sf::Keyboard::Key::Menu;
            scope().attr("KEY_LBRACKET") = (unsigned char)sf::Keyboard::Key::LBracket;
            scope().attr("KEY_RBRACKET") = (unsigned char)sf::Keyboard::Key::RBracket;
            scope().attr("KEY_SEMICOLON") = (unsigned char)sf::Keyboard::Key::SemiColon;
            scope().attr("KEY_COMMA") = (unsigned char)sf::Keyboard::Key::Comma;
            scope().attr("KEY_PERIOD") = (unsigned char)sf::Keyboard::Key::Period;
            scope().attr("KEY_QUOTE") = (unsigned char)sf::Keyboard::Key::Quote;
            scope().attr("KEY_SLASH") = (unsigned char)sf::Keyboard::Key::Slash;
            scope().attr("KEY_BACKSLASH") = (unsigned char)sf::Keyboard::Key::BackSlash;
            scope().attr("KEY_TILDE") = (unsigned char)sf::Keyboard::Key::Tilde;
            scope().attr("KEY_EQUAL") = (unsigned char)sf::Keyboard::Key::Equal;
            scope().attr("KEY_DASH") = (unsigned char)sf::Keyboard::Key::Dash;
            scope().attr("KEY_SPACE") = (unsigned char)sf::Keyboard::Key::Space;
            scope().attr("KEY_RETURN") = (unsigned char)sf::Keyboard::Key::Return;
            scope().attr("KEY_BACKSPACE") = (unsigned char)sf::Keyboard::Key::BackSpace;
            scope().attr("KEY_TAB") = (unsigned char)sf::Keyboard::Key::Tab;
            scope().attr("KEY_PAGEUP") = (unsigned char)sf::Keyboard::Key::PageUp;
            scope().attr("KEY_PAGEDOWN") = (unsigned char)sf::Keyboard::Key::PageDown;
            scope().attr("KEY_END") = (unsigned char)sf::Keyboard::Key::End;
            scope().attr("KEY_HOME") = (unsigned char)sf::Keyboard::Key::Home;
            scope().attr("KEY_INSERT") = (unsigned char)sf::Keyboard::Key::Insert;
            scope().attr("KEY_DELETE") = (unsigned char)sf::Keyboard::Key::Delete;
            scope().attr("KEY_ADD") = (unsigned char)sf::Keyboard::Key::Add;
            scope().attr("KEY_SUBTRACT") = (unsigned char)sf::Keyboard::Key::Subtract;
            scope().attr("KEY_MULTIPLY") = (unsigned char)sf::Keyboard::Key::Multiply;
            scope().attr("KEY_DIVIDE") = (unsigned char)sf::Keyboard::Key::Divide;
            scope().attr("KEY_LEFT") = (unsigned char)sf::Keyboard::Key::Left;
            scope().attr("KEY_RIGHT") = (unsigned char)sf::Keyboard::Key::Right;
            scope().attr("KEY_UP") = (unsigned char)sf::Keyboard::Key::Up;
            scope().attr("KEY_DOWN") = (unsigned char)sf::Keyboard::Key::Down;
            scope().attr("KEY_NUMPAD0") = (unsigned char)sf::Keyboard::Key::Numpad0;
            scope().attr("KEY_NUMPAD1") = (unsigned char)sf::Keyboard::Key::Numpad1;
            scope().attr("KEY_NUMPAD2") = (unsigned char)sf::Keyboard::Key::Numpad2;
            scope().attr("KEY_NUMPAD3") = (unsigned char)sf::Keyboard::Key::Numpad3;
            scope().attr("KEY_NUMPAD4") = (unsigned char)sf::Keyboard::Key::Numpad4;
            scope().attr("KEY_NUMPAD5") = (unsigned char)sf::Keyboard::Key::Numpad5;
            scope().attr("KEY_NUMPAD6") = (unsigned char)sf::Keyboard::Key::Numpad6;
            scope().attr("KEY_NUMPAD7") = (unsigned char)sf::Keyboard::Key::Numpad7;
            scope().attr("KEY_NUMPAD8") = (unsigned char)sf::Keyboard::Key::Numpad8;
            scope().attr("KEY_NUMPAD9") = (unsigned char)sf::Keyboard::Key::Numpad9;
            scope().attr("KEY_F1") = (unsigned char)sf::Keyboard::Key::F1;
            scope().attr("KEY_F2") = (unsigned char)sf::Keyboard::Key::F2;
            scope().attr("KEY_F3") = (unsigned char)sf::Keyboard::Key::F3;
            scope().attr("KEY_F4") = (unsigned char)sf::Keyboard::Key::F4;
            scope().attr("KEY_F5") = (unsigned char)sf::Keyboard::Key::F5;
            scope().attr("KEY_F6") = (unsigned char)sf::Keyboard::Key::F6;
            scope().attr("KEY_F7") = (unsigned char)sf::Keyboard::Key::F7;
            scope().attr("KEY_F8") = (unsigned char)sf::Keyboard::Key::F8;
            scope().attr("KEY_F9") = (unsigned char)sf::Keyboard::Key::F9;
            scope().attr("KEY_F10") = (unsigned char)sf::Keyboard::Key::F10;
            scope().attr("KEY_F11") = (unsigned char)sf::Keyboard::Key::F11;
            scope().attr("KEY_F12") = (unsigned char)sf::Keyboard::Key::F12;
            scope().attr("KEY_F13") = (unsigned char)sf::Keyboard::Key::F13;
            scope().attr("KEY_F14") = (unsigned char)sf::Keyboard::Key::F14;
            scope().attr("KEY_F15") = (unsigned char)sf::Keyboard::Key::F15;
            scope().attr("KEY_PAUSE") = (unsigned char)sf::Keyboard::Key::Pause;
        }

    }
}

#endif //PYRO2D_INPUTMODULE_H
