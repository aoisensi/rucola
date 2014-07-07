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
    renderer.SetDrawColor(rideing ? Color::White : Color::Gray);
    renderer.FillRect(rect);
};

}}
