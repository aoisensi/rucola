cmake_minimum_required(VERSION 3.0)

project(rucola)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMake/")

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_C_COMPILER clang)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include(FindPkgConfig)


find_package(Boost 1.55.0)
find_package(OpenGL)
find_package(SDL2)
find_package(SDL2_ttf)

if( NOT Boost_FOUND )
	message("error boost 404")
endif( NOT Boost_FOUND )

if( NOT SDL2_FOUND )
	message("error sdl 404")
endif( NOT SDL2_FOUND )

if( NOT SDL2_ttf_FOUND )
	message("error sdl 404")
endif( NOT SDL2_ttf_FOUND )

include_directories(
	${BOOST_INCLUDE_DIRS}
	${OPENGL_INCLUDE_DIRS}
	${SDL2_INCLUDE_DIR}
	${SDL2_ttf_INCLUDE_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

file(GLOB_RECURSE CLSOURCES src/*.cpp)

add_executable(rucola ${CLSOURCES} cl.cpp)

target_link_libraries(rucola
	${OPENGL_LIBRARIES}
	${SDL2_LIBRARY}
	${SDL2_ttf_LIBRARY}
)

message(${SDL2_INCLUDE_DIR})
