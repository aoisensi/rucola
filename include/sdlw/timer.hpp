#ifndef HPP_RUCOLA_SDLW_TIMER
#define HPP_RUCOLA_SDLW_TIMER

#include <cstdint>

namespace Rucola { namespace SDLW {

void Delay(uint32_t ms);
uint32_t GetTicks();

}}

#endif
