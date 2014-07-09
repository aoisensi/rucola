#include "gui/button.hpp"
#include <iostream>

namespace Rucola { namespace GUI {

Button::Button(std::string message):
    message(message),
    rideing(false)
{ };

Button::~Button()
{ };

void Button::EnterCursor() { rideing = true; };
void Button::LeaveCursor() { rideing = false; };

void Button::MoveCursor(Point pos) { };

void Button::Rendering(SDLW::Video::Renderer& renderer, Rect rect) {
    if(rideing) {
        renderer.SetDrawColor(Color::Black);
    } else {
        renderer.SetDrawColor(Color::Green);
    }
    renderer.DrawLine(Point(0, 0), Point(rect.size.x, rect.size.y));
    renderer.DrawLine(Point(0, rect.size.y), Point(rect.size.x, 0));
    // TODO

};

}}
