#include "math/color.hpp"

namespace Rucola { namespace Math {
    Color::Color(uint8_t r, uint8_t g, uint8_t b) :
        r(r), g(g), b(b), a(255)
    { };

    Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a) :
        r(r), g(g), b(b), a(a)
    { };

    const Color Color::White   = Color(255, 255, 255);
    const Color Color::Black   = Color(  0,   0,   0);
    const Color Color::Gray    = Color(128, 128, 128);
    const Color Color::Red     = Color(255,   0,   0);
    const Color Color::Green   = Color(  0, 255,   0);
    const Color Color::Blue    = Color(  0,   0, 255);
}}
