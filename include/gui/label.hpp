#ifndef HPP_RUCOLA_GUI_LABEL
#define HPP_RUCOLA_GUI_LABEL

#include <string>

#include "controll.hpp"

namespace Rucola {
namespace GUI {

class Label : public Controll {

  std::string text;

public:
  Label(std::string message);
  ~Label();

  void EnterCursor();
  void LeaveCursor();
  void MoveCursor(Point pos);
  void Rendering(SDLW::Video::Renderer &renderer, Rect rect);

  void SetText(std::string text);
};
}
}

#endif
