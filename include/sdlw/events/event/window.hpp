#ifndef HPP_RUCOLA_SDLW_EVENTS_EVENT_WINDOW
#define HPP_RUCOLA_SDLW_EVENTS_EVENT_WINDOW

#include <cstdint>
#include <boost/variant.hpp>

#include <SDL2/SDL_events.h>

#include "math/point.hpp"



namespace Rucola { namespace SDLW { namespace Events { namespace Event {

struct Window {
public:

    Window(SDL_Event event);

    uint32_t windowID;

    enum Type {
        unknown,
        enter,
        leave,
        close,
    };

    struct Enter {
        Enter(SDL_WindowEvent event);
    };

    struct Leave {
        Leave(SDL_WindowEvent event);
    };

    struct Close {
        Close(SDL_WindowEvent event);
    };

private:
    boost::variant<
        boost::blank,
        Window::Enter,
        Window::Leave,
        Window::Close
    > v;

public:

    enum Type GetType();
    Window::Enter GetEnter();
    Window::Leave GetLeave();
    Window::Close GetClose();

};

}}}}

#endif
