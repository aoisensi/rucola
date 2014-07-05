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
			switch(e.GetType()) {
				case SDLW::Events::Base::Type::quit: {
					quit = true;
					break;
				}
				case SDLW::Events::Base::Type::mouse: {
					auto ev = e.GetMouse();
					switch(ev.GetType()) {
						case SDLW::Events::Event::Mouse::motion: {
							auto event = ev.GetMotion();
							cout << event.pos.x << ',' << event.pos.x << endl;
							break;
						}
						default: {
							break;
						}
					}
					break;
				}

				default: {
					break;
				}
			}
		}
	}
	return 0;
}

}
