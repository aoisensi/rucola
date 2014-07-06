#include <iostream>

#include "sdlw/sdlw.hpp"
#include "client.hpp"
#include "gui/button.hpp"

using namespace Rucola::SDLW;
using namespace std;

namespace Rucola {

Client::Client():
    window("Rucola", 640, 480, Video::Window::Flags::Shown),
    renderer(window),
    frame(0),
    controll(new GUI::Button("test"))
{
    // auto ctrl = GUI::Button("test");
    // controll(ctrl);
};

Client::~Client() { };

int Client::Run() {
    bool quit = false;
    renderer.SetDrawColor(Math::Color::White);
    renderer.Clear();
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
        renderer.Present();
        cout << "frame:" << frame << endl;
        frame++;
        SDLW::Delay(30);
    }
    return 0;
}

}
