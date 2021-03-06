#ifndef SDLPLUS_VIDEO_HPP
#define SDLPLUS_VIDEO_HPP

#include <string>
#include <cstdint>

#include "surface.hpp"
#include "render.hpp"

struct SDL_Window;

namespace Rucola { namespace SDLW { namespace Video {

  class Window
  {
  public:
    SDL_Window* ptr;

    enum class Flags {
      Default             = 0,
      Fullscreen          = 1 << 0,
      FullscreenDesktop   = 1 << 1,
      OpenGL              = 1 << 2,
      Shown               = 1 << 3,
      Hidden              = 1 << 4,
      Borderless          = 1 << 5,
      Resizable           = 1 << 6,
      Minimized           = 1 << 7,
      Maximized           = 1 << 8,
      InputGrabbed        = 1 << 9,
      InputFocus          = 1 << 10,
      MouseFocus          = 1 << 11,
      Foreign             = 1 << 12,
      AllowHighDPI        = 1 << 13,
    };

    Window(std::string title, int w, int h, Flags flags);
    virtual ~Window();

    Surface GetSurface();
    void Show();

    private:
  };


  Window::Flags operator | (Window::Flags l, Window::Flags r);
  Window::Flags operator & (Window::Flags l, Window::Flags r);


}}}

#endif
