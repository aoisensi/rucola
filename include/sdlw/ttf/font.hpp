#ifndef HPP_RUCOLA_SDLW_TTF_FONT
#define HPP_RUCOLA_SDLW_TTF_FONT

#include <memory>
#include <string>

#include "general.hpp"
#include "sdlw/video/surface.hpp"

using namespace std;

namespace Rucola { namespace SDLW {

    namespace TTF {

        class Font {
            TTF_Font* font;

        public:
            Font(string path, int size);
            Video::Surface RenderUTF8Blended(string text);


        };
    }
}}

#endif
