#include "sdlw/events/events.hpp"

namespace Rucola { namespace SDLW { namespace Events {

std::vector<Event> Poll() {
	std::vector<Event> events;

	SDL_Event event;
	while(SDL_PollEvent(&event))
		events.push_back(*reinterpret_cast<Event*>(&event));
	
	return events;
};


}}}
