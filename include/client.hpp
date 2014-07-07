#ifndef HPP_RUCOLA_CLIENT
#define HPP_RUCOLA_CLIENT

#include <cstdint>
#include <memory>

#include "sdlw/sdlw.hpp"
#include "gui/controll.hpp"

namespace Rucola {

class Client : SDLW::Application {
public:
    Client();
    ~Client();
    int Run();
private:
    Math::Point size;
    SDLW::Video::Window window;
    SDLW::Video::Renderer renderer;
    unique_ptr<GUI::Controll> controll;
    uint64_t frame;
};

}

#endif
