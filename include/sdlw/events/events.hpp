#ifndef HPP_RUCOLA_SDLW_EVENTS
#define HPP_RUCOLA_SDLW_EVENTS

#include <cstdint>
#include <vector>

#include <SDL2/SDL_events.h>

#include "sdlw/events/base.hpp"

namespace Rucola { namespace SDLW { namespace Events {

	std::vector<Event> Poll();

}}}

#endif
