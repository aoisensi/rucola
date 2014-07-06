#ifndef HPP_RUCOLA_SDLW_EVENTS_EVENT_MOUSE
#define HPP_RUCOLA_SDLW_EVENTS_EVENT_MOUSE

#include <cstdint>
#include <boost/variant.hpp>

#include <SDL2/SDL_events.h>

#include "math/point.hpp"



namespace Rucola { namespace SDLW { namespace Events { namespace Event {

struct Mouse {
public:

	Mouse(SDL_Event event);

	enum Type {
		unknown,
		motion,
		button,
		wheel,
	};

	struct Motion {
		Motion(SDL_MouseMotionEvent event);
		uint32_t state;
		Math::Point pos;
		Math::Point rel;
	};

	struct Button {
		Button(SDL_MouseButtonEvent event);
		enum State : bool {
			Pressed,
			Released,
		};

		uint8_t button;
		State state;
		uint8_t clicks;
		Math::Point pos;
	};

	struct Wheel {
		Wheel(SDL_MouseWheelEvent event);
		Math::Point move;
	};

	uint32_t windowID;
	uint32_t which;
private:
	boost::variant<
		boost::blank,
		Mouse::Motion,
		Mouse::Button,
		Mouse::Wheel
	> v;

public:

	enum Type GetType();
	Mouse::Motion GetMotion();
	Mouse::Button GetButton();
	Mouse::Wheel GetWheel();

};

}}}}

#endif
