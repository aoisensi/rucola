#include "sdlw/window.hpp"

#include <SDL2/SDL.h>

namespace Rucola { namespace SDLW {

	namespace {
		bool hasFlag(Window::Flags flags, Window::Flags checker) {
			return (bool)(flags & checker);
		}

		SDL_WindowFlags toNativeFlags(Window::Flags flags) {
			uint32_t result = 0;
			if (hasFlag(flags, Window::Flags::Fullscreen)       ) result |= SDL_WINDOW_FULLSCREEN;
			if (hasFlag(flags, Window::Flags::FullscreenDesktop)) result |= SDL_WINDOW_FULLSCREEN_DESKTOP;
			if (hasFlag(flags, Window::Flags::OpenGL)           ) result |= SDL_WINDOW_OPENGL;
			if (hasFlag(flags, Window::Flags::Shown)            ) result |= SDL_WINDOW_SHOWN;
			if (hasFlag(flags, Window::Flags::Hidden)           ) result |= SDL_WINDOW_HIDDEN;
			if (hasFlag(flags, Window::Flags::Borderless)       ) result |= SDL_WINDOW_BORDERLESS;
			if (hasFlag(flags, Window::Flags::Resizable)        ) result |= SDL_WINDOW_RESIZABLE;
			if (hasFlag(flags, Window::Flags::Minimized)        ) result |= SDL_WINDOW_MINIMIZED;
			if (hasFlag(flags, Window::Flags::Maximized)        ) result |= SDL_WINDOW_MAXIMIZED;
			if (hasFlag(flags, Window::Flags::InputGrabbed)     ) result |= SDL_WINDOW_INPUT_GRABBED;
			if (hasFlag(flags, Window::Flags::InputFocus)       ) result |= SDL_WINDOW_INPUT_FOCUS;
			if (hasFlag(flags, Window::Flags::MouseFocus)       ) result |= SDL_WINDOW_MOUSE_FOCUS;
			if (hasFlag(flags, Window::Flags::Foreign)          ) result |= SDL_WINDOW_FOREIGN;
			if (hasFlag(flags, Window::Flags::AllowHighDPI)     ) result |= SDL_WINDOW_ALLOW_HIGHDPI;
			return (SDL_WindowFlags)result;
		}
	}

	Window::Window(std::string title, int w, int h, Flags flags) :
		window(SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, w, h, toNativeFlags(flags)))
	{
		if(!window) throw new std::exception();
	}

	Window::~Window() {
		SDL_DestroyWindow(window);
	}

	Window::Flags operator | (Window::Flags l, Window::Flags r) {
		return static_cast<Window::Flags>(static_cast<int>(l) | static_cast<int>(r));
	}

	Window::Flags operator & (Window::Flags l, Window::Flags r) {
		return static_cast<Window::Flags>(static_cast<int>(l) & static_cast<int>(r));
	}

}}
