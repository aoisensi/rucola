#include "gui/button.hpp"

namespace Rucola { namespace GUI {

Button::Button(std::string message):
    message(message),
    rideing(false)
{ };

Button::~Button()
{ };

void Button::RideCursor() { rideing = true; };
void Button::LeaveCursor() { rideing = false; };

void Button::MoveCursor(Point pos) { };

void Button::Rendering(SDLW::Video::Renderer& renderer, Rect rect) {
    renderer.SetDrawColor(rideing ? Color::White : Color::Gray);
    renderer.FillRect(rect);
    renderer.SetDrawColor(Color::Black);
    renderer.DrawRect(rect);
};

}}
