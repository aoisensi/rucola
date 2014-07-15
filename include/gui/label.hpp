#ifndef HPP_RUCOLA_GUI_LABEL
#define HPP_RUCOLA_GUI_LABEL

#include <string>

#include "sdlw/ttf/font.hpp"
#include "controll.hpp"

namespace Rucola {
namespace GUI {

    class Label : public Controll {

        std::string text;
        SDLW::TTF::Font font;
        SDLW::Video::Texture texture;

    public:
        Label(std::string& text);
        ~Label();

        void EnterCursor();
        void LeaveCursor();
        void MoveCursor(Point pos);
        void Rendering(Rect rect);

        void SetText(std::string text);
    };
}
}

#endif
