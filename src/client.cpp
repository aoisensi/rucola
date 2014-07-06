#include "sdlw/sdlw.hpp"
#include "client.hpp"
#include <iostream>

using namespace Rucola::SDLW;
using namespace std;

namespace Rucola {

Client::Client() :
	window("Rucola", 640, 480, Video::Window::Flags::Shown)
{ };

Client::~Client() { };

int Client::Run() {
	bool quit = false;
	long frame = 0;
	Math::Point old;
	SDLW::Video::Renderer render(window);
	render.SetDrawColor(Math::Color::Black);
	render.Clear();
	while(!quit) {
		Error::Print();
		for(auto e : SDLW::Events::Poll()) {
			switch(e.GetType()) {
				case SDLW::Events::Base::Type::quit: {
					quit = true;
					break;
				}
				case SDLW::Events::Base::Type::mouse: {
					auto ev = e.GetMouse();
					switch(ev.GetType()) {
						case SDLW::Events::Event::Mouse::Type::motion: {
							auto event = ev.GetMotion();
							render.SetDrawColor(Math::Color::Green);
							render.DrawLine(old, event.pos);
							old = event.pos;
							break;
						}
						case SDLW::Events::Event::Mouse::Type::button: {
							auto event = ev.GetButton();
							cout << "clicked" << endl;
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
		render.Present();
		cout << "frame:" << frame << endl;
		frame++;
		SDLW::Delay(30);
	}
	return 0;
}

}
