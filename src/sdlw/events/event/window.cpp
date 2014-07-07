#include "sdlw/events/event/window.hpp"

namespace Rucola { namespace SDLW { namespace Events { namespace Event {

Window::Window(SDL_Event event) {
    if(event.type == SDL_WINDOWEVENT) {
        auto e = event.window;
        windowID = e.windowID;

        switch(e.event) {
        case SDL_WINDOWEVENT_ENTER:
            v = Window::Enter(e);
            break;
        case SDL_WINDOWEVENT_LEAVE:
            v = Window::Leave(e);
            break;
        case SDL_WINDOWEVENT_CLOSE:
            v = Window::Close(e);
            break;
        default:
            v = boost::blank();
            break;
        }
    }
};

Window::Enter::Enter(SDL_WindowEvent event) { };
Window::Leave::Leave(SDL_WindowEvent event) { };
Window::Close::Close(SDL_WindowEvent event) { };

Window::Type Window::GetType() {
    return static_cast<Window::Type>(v.which());
}

Window::Enter Window::GetEnter() {
    return boost::get<Window::Enter>(v);
};

Window::Leave Window::GetLeave() {
    return boost::get<Window::Leave>(v);
};

Window::Close Window::GetClose() {
    return boost::get<Window::Close>(v);
};

}}}}
