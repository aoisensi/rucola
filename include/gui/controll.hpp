#ifndef HPP_RUCOLA_GUI_CONTROLL
#define HPP_RUCOLA_GUI_CONTROLL

#include "sdlw/video/render.hpp"
#include "math/point.hpp"
#include "math/rect.hpp"

using namespace Rucola::Math;

namespace Rucola { namespace GUI {

class Controll {
    virtual void RideCursor() = 0;
    virtual void LeaveCursor() = 0;
    virtual void MoveCursor(Point pos) = 0;
    virtual void Rendering(SDLW::Video::Renderer& renderer, Rect rect) = 0;

};

}}

#endif
