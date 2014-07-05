#ifndef HPP_RUCOLA_MATH_POINT
#define HPP_RUCOLA_MATH_POINT

#include <cstdint>

namespace Rucola { namespace Math {
	struct Point {
		Point(int x, int y);
		int x, y;
	};
}}

#endif
