#ifndef HPP_RUCOLA_MATH_RECT
#define HPP_RUCOLA_MATH_RECT

#include "point.hpp"

namespace Rucola { namespace Math {
    struct Rect {
        Rect(int x, int y, int w, int h);
        Rect(int w, int h);
        Rect(Point origin, Point size);
        Rect(Point size);
        Rect();
        Point origin, size;
    };
}}

#endif
