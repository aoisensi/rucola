#include "sdlw/video/render.hpp"

#include "sdlw/timer.hpp"
#include "sdlw/error.hpp"

#include <iostream>

namespace Rucola { namespace SDLW { namespace Video {

Renderer::Renderer(Window& window) :
  ptr(SDL_CreateRenderer(window.ptr, -1, SDL_RENDERER_SOFTWARE))
{
    Error::Print();
};

Renderer::~Renderer() {
  SDL_DestroyRenderer(ptr);
};

void Renderer::Clear() {
  SDL_RenderClear(ptr);
}

void Renderer::SetDrawColor() {
  SDL_SetRenderDrawColor(ptr, 255, 0, 0, 255); //test blue
};

void Renderer::DrawPoint(Rucola::Math::Point point) {
  SDL_RenderDrawPoint(ptr, point.x, point.y);
};

void Renderer::Present() {
  SDL_RenderPresent(ptr);
};

}}}
