#ifndef HPP_RUCOLA_CLIENT
#define HPP_RUCOLA_CLIENT

#include "sdlw/sdlw.hpp"

namespace Rucola {

class Client : SDLW::Application {
public:
	Client();
	~Client();
	int Run();
private:
	SDLW::Window window;
};

}

#endif
