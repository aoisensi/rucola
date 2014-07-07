#include "sdlw/events/event/mouse.hpp"


namespace Rucola { namespace SDLW { namespace Events { namespace Event {

Mouse::Mouse(SDL_Event event) {
    if(event.type == SDL_MOUSEMOTION ||
       event.type == SDL_MOUSEBUTTONDOWN ||
       event.type == SDL_MOUSEBUTTONUP ||
       event.type == SDL_MOUSEWHEEL) {
        windowID = event.motion.windowID;
        which = event.motion.which;

        switch(event.type) {
        case SDL_MOUSEMOTION:
            v = Mouse::Motion(event.motion);
            break;
        case SDL_MOUSEBUTTONDOWN:
        case SDL_MOUSEBUTTONUP:
            v = Mouse::Button(event.button);
            break;
        case SDL_MOUSEWHEEL:
            v = Mouse::Wheel(event.wheel);
            break;
        default:
            v = boost::blank();
        }
    }
};

Mouse::Motion::Motion(SDL_MouseMotionEvent event) :
    state(event.state),
    pos(Math::Point(event.x, event.y)),
    rel(Math::Point(event.xrel, event.yrel))
{ };

Mouse::Button::Button(SDL_MouseButtonEvent event) :
    button(event.button),
    state(event.state == SDL_PRESSED
        ? State::Pressed
        : State::Released),
    clicks(event.clicks),
    pos(Math::Point(event.x, event.y))
{ };

Mouse::Wheel::Wheel(SDL_MouseWheelEvent event) :
    move(Math::Point(event.x, event.y))
{ };

Mouse::Type Mouse::GetType() {
    return static_cast<Mouse::Type>(v.which());
}

Mouse::Motion Mouse::GetMotion() {
    return boost::get<Mouse::Motion>(v);
};

Mouse::Button Mouse::GetButton() {
    return boost::get<Button>(v);
};

Mouse::Wheel Mouse::GetWheel() {
    return boost::get<Wheel>(v);
};

}}}}
