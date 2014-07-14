#include "sdlw/ttf/font.hpp"

#include <SDL2/SDL_ttf.h>

namespace Rucola { namespace SDLW { namespace TTF {

Font::Font(string path, int size) :
    font(TTF_OpenFont(path.c_str(), size))
{
    if(!font) Throw();
};

Video::Surface Font::RenderUTF8Blended(string text) {
    SDL_Color color = {0, 0, 0};
    Video::Surface surface(TTF_RenderText_Solid(font, text.c_str(), color));
    return surface;
}

}}}
