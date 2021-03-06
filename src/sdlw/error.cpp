#include "sdlw/error.hpp"

#include <iostream>
#include <SDL2/SDL_error.h>

#include "exception.hpp"

namespace Rucola { namespace SDLW {

    void Error::Clear() {
        SDL_ClearError();
    };

    string Error::Get() {
        return string(SDL_GetError());
    };

    // void Error::Set(std::string message) {
    //   SDL_SetError(message.c_str());
    // };

    void Error::Throw() {
        string mes = Get();
        Clear();
        if(!mes.empty()) BOOST_THROW_EXCEPTION(Exception());
    };
}}
