#include "sdlw/events/base.hpp"

namespace Rucola { namespace SDLW { namespace Events {

Base::Base(SDL_Event event) :
    timestamp(event.quit.timestamp)
{
    switch(event.type) {
    case SDL_QUIT:
        v = Event::Quit();
        break;
    case SDL_MOUSEMOTION:
    case SDL_MOUSEBUTTONDOWN:
    case SDL_MOUSEBUTTONUP:
    case SDL_MOUSEWHEEL:
        v = Event::Mouse(event);
        break;
    case SDL_WINDOWEVENT:
        v = Event::Window(event);
        break;
    default:
        v = boost::blank();
        break;
    }
}

Base::Type Base::GetType() {
    return static_cast<Type>(v.which());
}

Event::Quit Base::GetQuit() {
    return boost::get<Event::Quit>(v);
}

Event::Mouse Base::GetMouse() {
    return boost::get<Event::Mouse>(v);
}

Event::Window Base::GetWindow() {
    return boost::get<Event::Window>(v);
}

std::vector<Base> Poll() {
    std::vector<Base> events;

    SDL_Event event;
    while(SDL_PollEvent(&event))
        events.push_back(Base(event));

    return events;
};

}}}
