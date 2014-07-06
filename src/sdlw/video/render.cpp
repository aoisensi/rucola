#include "sdlw/video/render.hpp"

#include "sdlw/timer.hpp"
#include "sdlw/error.hpp"
#include "sdlw/video/rect.hpp"

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

void Renderer::SetDrawColor(Math::Color color) {
    SDL_SetRenderDrawColor(ptr, color.r, color.g, color.b, color.a);
};

void Renderer::DrawPoint(Rucola::Math::Point point) {
  SDL_RenderDrawPoint(ptr, point.x, point.y);
};

void Renderer::DrawLine(Rucola::Math::Point p1, Rucola::Math::Point p2) {
    SDL_RenderDrawLine(ptr, p1.x, p1.y, p2.x, p2.y);
}

void Renderer::Present() {
    SDL_RenderPresent(ptr);
};

void Renderer::DrawRect(Rucola::Math::Rect& rect) {
    SDLW::Video::Rect r(rect);
    SDL_RenderDrawRect(ptr, &r);
}

void Renderer::FillRect(Rucola::Math::Rect& rect) {
    SDLW::Video::Rect r(rect);
    SDL_RenderFillRect(ptr, &r);
}

}}}
