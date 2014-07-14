#include "exception.hpp"

namespace Rucola {

Exception::Exception() { };

Exception::Exception(std::string& message):
    message(message)
{ };

}
