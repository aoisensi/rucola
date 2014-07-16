#ifndef HPP_RUCOLA_GUI_BUTTON
#define HPP_RUCOLA_GUI_BUTTON

#include <string>

#include "controll.hpp"

namespace Rucola {
namespace GUI {

class Button : public Controll {

    bool rideing;

public:
    Button(std::string message);
    ~Button();

    void EnterCursor();
    void LeaveCursor();
    void MoveCursor(Point pos);
    void Rendering(Rect rect);
};
}
}

#endif
