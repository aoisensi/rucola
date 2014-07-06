#ifndef HPP_RUCOLA_GUI_BUTTON
#define HPP_RUCOLA_GUI_BUTTON

#include <string>

#include "controll.hpp"

namespace Rucola { namespace GUI {

class Button : public Controll {

    std::string message;
    bool rideing;

public:
    Button(std::string message);
    ~Button();

    void RideCursor();
    void LeaveCursor();
    void MoveCursor(Point pos);
    void Rendering(SDLW::Video::Renderer& renderer, Rect rect);
};

}}

#endif
