#include "sdlw/application.hpp"

#include <iostream>

#include <SDL2/SDL.h>

namespace Rucola { namespace SDLW {

Application::Application()
{
	SDL_Init(SDL_INIT_EVERYTHING);
}

Application::~Application()
{
	SDL_Quit();
}

}} // namespace SDLPlus
