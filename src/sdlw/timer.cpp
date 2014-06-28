#include "sdlw/timer.hpp"
#include <SDL2/SDL_timer.h>

namespace Rucola { namespace SDLW {

void Delay(uint32_t ms) {
	SDL_Delay(ms);
};

uint32_t GetTicks() {
	return SDL_GetTicks();
};

}}
