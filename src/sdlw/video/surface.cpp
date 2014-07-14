#include "sdlw/video/surface.hpp"


namespace Rucola { namespace SDLW { namespace Video {

    Surface::Surface(SDL_Surface* ptr):
        ptr(ptr)
    { };

    Surface::~Surface() {
        SDL_FreeSurface(ptr);
    }

    int Surface::GetWidth() {
        return ptr->w;
    };

    int Surface::GetHeight() {
        return ptr->h;
    };

    int Surface::GetPitch() {
        return ptr->pitch;
    }





}}}
