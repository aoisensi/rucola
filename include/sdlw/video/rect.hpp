#ifndef HPP_RUCOLA_SDLW_VIDEO_RECT
#define HPP_RUCOLA_SDLW_VIDEO_RECT

#include <SDL2/SDL_rect.h>

#include "math/rect.hpp"

namespace Rucola { namespace SDLW { namespace Video {

    struct Point : public SDL_Point {
        Point(Math::Point point);
    };

    struct Rect : public SDL_Rect {
        Rect(Math::Rect rect);
    };

}}}

#endif
