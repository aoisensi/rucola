#ifndef HPP_RUCOLA_SDLW_EVENT_BASE
#define HPP_RUCOLA_SDLW_EVENT_BASE

#include <cstdint>

#include <SDL2/SDL_events.h>

#include "math/point.hpp"

using namespace Rucola::Math;

namespace Rucola { namespace SDLW { namespace Events {

	enum Type : uint32_t {
		Quit					= SDL_QUIT,

		MouseMotion				= SDL_MOUSEMOTION,
		MouseButtonDown			= SDL_MOUSEBUTTONDOWN,
		MouseButtonUp			= SDL_MOUSEBUTTONUP,
		MouseWheel				= SDL_MOUSEWHEEL,
		/* MORE TODO */
	};

	enum State : uint8_t {
		Pressed					= SDL_PRESSED,
		Released				= SDL_RELEASED,
	};

	union Event {
		Type type;
		uint32_t timestamp;

		struct {
		} Quit;

		union {
			uint32_t windowID;
			uint32_t which;

			struct {
				uint32_t state;
				Point pos;
				Point rel;
			} Motion;

			struct {
				uint32_t button;
				State state;
				uint32_t clicks;
				uint32_t padding;
				Point pos;
			} Button;

			struct {
				Point scroll;
			} Wheel;
		} Mouse;
	};

}}}
#endif
