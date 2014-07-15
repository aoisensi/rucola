#ifndef HPP_RUCOLA_GUI_CONTROLL
#define HPP_RUCOLA_GUI_CONTROLL

#include "sdlw/video/render.hpp"
#include "math/point.hpp"
#include "math/rect.hpp"

using namespace Rucola::Math;

namespace Rucola { namespace GUI {

class Controll {
private:
protected:
    SDLW::Video::Renderer renderer;
public:
    virtual void EnterCursor() = 0;
    virtual void LeaveCursor() = 0;
    virtual void MoveCursor(Point pos) = 0;
    virtual void Rendering(Rect rect) = 0;

};

}}

#endif
