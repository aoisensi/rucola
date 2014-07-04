#include "sdlw/sdlw.hpp"
#include "client.hpp"
#include <iostream>

using namespace Rucola::SDLW;
using namespace std;

namespace Rucola {

Client::Client() :
	window("Rucola", 640, 480, Window::Flags::Shown)
{ };

Client::~Client() { };

int Client::Run() {
	bool quit;
	while(!quit) {
		SDLW::Delay(30);
		for(auto e : SDLW::Events::Poll()) {
			switch(e.type) {
				case SDLW::Events::Type::Quit:
					quit = true;
					break;
				case SDLW::Events::Type::MouseMotion:
					cout << e.Mouse.Motion.pos.x << ',' << e.Mouse.Motion.pos.y << endl;
					break;
				default:
					break;
			}
		}
	}
	return 0;
}

}
