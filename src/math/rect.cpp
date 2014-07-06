#include "math/rect.hpp"

namespace Rucola { namespace Math {

    Rect::Rect(int x, int y, int w, int h):
        origin(x, y),
        size(w, h)
    { };

    Rect::Rect(int w, int h):
        origin(),
        size(w, h)
    { };

    Rect::Rect(Point origin, Point size):
        origin(origin),
        size(size)
    { };

    Rect::Rect(Point size):
        origin(),
        size(size)
    { };

    Rect::Rect():
        origin(),
        size()
    { };
}}
