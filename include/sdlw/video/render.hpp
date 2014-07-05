#ifndef HPP_RUCOLA_SDLW_VIDEO_RENDER
#define HPP_RUCOLA_SDLW_VIDEO_RENDER

#include <SDL2/SDL_render.h>

#include "video.hpp"
#include "math/point.hpp"

namespace Rucola { namespace SDLW { namespace Video {
  class Window;

  class Renderer {
  public:
    SDL_Renderer* ptr;

    Renderer(Window window);
    ~Renderer();

    void Clear();
    void SetDrawColor();
    void DrawPoint(Rucola::Math::Point point);
    void Present();
  };
}}}

#endif
