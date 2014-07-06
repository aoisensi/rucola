#ifndef HPP_RUCOLA_MATH_COLOR
#define HPP_RUCOLA_MATH_COLOR

#include <cstdint>

namespace Rucola { namespace Math {
    struct Color {
        uint8_t r, g, b, a;

        Color(uint8_t r, uint8_t g, uint8_t b);
        Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a);

        static const Color White;
        static const Color Black;
        static const Color Red;
        static const Color Green;
        static const Color Blue;
    };
}}

#endif
