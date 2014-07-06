#include "sdlw/video/rect.hpp"

namespace Rucola { namespace SDLW { namespace Video {

Point::Point(Math::Point point) {
    x = point.x;
    y = point.y;
};

Rect::Rect(Math::Rect rect) {
    x = rect.origin.x;
    y = rect.origin.y;
    w = rect.size.x;
    y = rect.size.y;
};

}}}
