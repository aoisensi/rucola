#include "sdlw/sdlw.hpp"
#include "client.hpp"
#include <iostream>

namespace Rucola {

Client::Client() :
	window("Rucola", 0, 0, 640, 480, SDLW::Window::Flags::Default)
{ };

Client::~Client() { };

int Client::Run() {
	SDLW::Delay(3000);
	return 0;
}

}
