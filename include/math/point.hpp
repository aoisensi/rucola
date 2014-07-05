#ifndef HPP_RUCOLA_MATH_POINT
#define HPP_RUCOLA_MATH_POINT

#include <cstdint>

namespace Rucola { namespace Math {
	struct Point {
		Point(int32_t x, int32_t y);
		int32_t x, y;
	};
}}

#endif
