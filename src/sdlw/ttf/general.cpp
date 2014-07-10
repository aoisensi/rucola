#include "sdlw/ttf/general.hpp"

#include <SDL_ttf.h>
#include "exception.hpp"

namespace Rucola { namespace SDLW { namespace TTF {

Init::Init() {
    if(TTF_Init()) BOOST_THROW_EXCEPTION(Exception());
};

Init::~Init() {
    TTF_Quit();
};

void Throw() {
    std::string error(TTF_GetError());
    if(!error.empty())
        Exception e;
        e << error;
        BOOST_THROW_EXCEPTION(e);
};

}}}
