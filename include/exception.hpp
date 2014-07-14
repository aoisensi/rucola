#ifndef HPP_RUCOLA_EXCEPTION
#define HPP_RUCOLA_EXCEPTION

#include <string>
#include <exception>
#include <boost/exception/all.hpp>

namespace Rucola {
    class Exception : public std::exception, public boost::exception {
        std::string message;
    public:
        Exception();
        Exception(std::string& message);
    };

    /*
    kopipe you
    BOOST_THROW_EXCEPTION(Exception());
    **/
}

#endif
