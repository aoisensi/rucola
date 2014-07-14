#ifndef HPP_RUCOLA_SDLW_VIDEO_SURFACE
#define HPP_RUCOLA_SDLW_VIDEO_SURFACE

#include <SDL2/SDL_surface.h>

namespace Rucola { namespace SDLW {

    namespace TTF { class Font; }

    namespace Video {
        class Window;
        class Texture;

        class Surface {
        private:
            SDL_Surface* ptr;
            Surface(SDL_Surface* ptr);
            ~Surface();

            friend Rucola::SDLW::TTF::Font;
            friend Rucola::SDLW::Video::Window;
            friend Rucola::SDLW::Video::Texture;
        public:

            int GetWidth();
            int GetHeight();
            int GetPitch();
        };
    }

}}

#endif
