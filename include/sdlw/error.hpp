#ifndef HPP_RUCOLA_SDLW_ERROR
#define HPP_RUCOLA_SDLW_ERROR

#include <string>

using namespace std;

namespace Rucola { namespace SDLW {
  class Error {
    Error();

  public:
    static void Clear();
    static string Get();
    // static void Set(std::string message);
    static bool Print();
  };
}}

#endif
