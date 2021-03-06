#ifndef HPP_RUCOLA_SDLW_EVENT_BASE
#define HPP_RUCOLA_SDLW_EVENT_BASE

#include <vector>
#include <cstdint>
#include <boost/variant.hpp>

#include <SDL2/SDL_events.h>

#include "math/point.hpp"
#include "event/mouse.hpp"
#include "event/window.hpp"

using namespace Rucola::Math;

namespace Rucola { namespace SDLW { namespace Events {

    namespace Event {
        struct Quit {};
    }

    struct Base {
    public:
        Base(SDL_Event event);

        enum Type {
            unknown,
            quit,
            mouse,
            window,
        };

        uint32_t timestamp;

    private:
        boost::variant<
            boost::blank,
            Event::Quit,
            Event::Mouse,
            Event::Window
        > v;

    public:
        Type GetType();
        Event::Quit GetQuit();
        Event::Mouse GetMouse();
        Event::Window GetWindow();
    };

    std::vector<Base> Poll();

}}}
#endif
