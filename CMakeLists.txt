cmake_minimum_required(VERSION 3.0)

project(rucola)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_C_COMPILER clang)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(OpenGL)
find_package(SDL)

if( NOT SDL_FOUND )
	message("error sdl 404")
endif( NOT SDL_FOUND )

include_directories(
	${OPENGL_INCLUDE_DIRS}
	${SDL_INCLUDE_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/include
)

file(GLOB_RECURSE CLSOURCES src/*.cpp)

add_executable(rucola ${CLSOURCES} cl.cpp)

target_link_libraries(rucola
	${OPENGL_LIBRARIES}
	${SDL_LIBRARY}
)
