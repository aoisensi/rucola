#ifndef HPP_RUCOLA_SDLW_VIDEO_SURFACE
#define HPP_RUCOLA_SDLW_VIDEO_SURFACE

#include <SDL2/SDL_surface.h>

namespace Rucola { namespace SDLW { namespace Video {

  class Surface {
  public:
    Surface(SDL_Surface* surface);

  private:
    SDL_Surface* surface;

  public:
  };

}}}

#endif
