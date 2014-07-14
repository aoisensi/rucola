#ifndef HPP_RUCOLA_SDLW_VIDEO_RENDER
#define HPP_RUCOLA_SDLW_VIDEO_RENDER

#include <SDL2/SDL_render.h>

#include "video.hpp"
#include "video.hpp"
#include "math/point.hpp"
#include "math/color.hpp"
#include "math/rect.hpp"

namespace Rucola { namespace SDLW { namespace Video {
    class Window;
    class Texture;

    class Renderer {
    private:
        SDL_Renderer* ptr;

        friend Texture;
    public:
        Renderer(Window& window);
        ~Renderer();

        void Clear();
        void SetDrawColor(Math::Color color);
        void Copy(Texture texture);
        void DrawPoint(Rucola::Math::Point point);
        void DrawLine(Rucola::Math::Point p1, Rucola::Math::Point p2);
        void DrawRect(Rucola::Math::Rect& rect);
        void FillRect(Rucola::Math::Rect& rect);
        void Present();
    };

    class Texture {
    private:
        SDL_Texture* ptr;

        friend Renderer;
    public:
        Texture(Renderer renderer, Surface surface);
        ~Texture();
    };
}}}

#endif
