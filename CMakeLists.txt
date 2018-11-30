cmake_minimum_required(VERSION 3.12)
project(Lab9)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
add_executable(Lab9 driver.cpp maze_factory.hpp maze_game.hpp maze.hpp room.hpp wall.hpp door.hpp e_factory.hpp f_factory.hpp e_room.hpp e_door.hpp e_wall.hpp f_wall.hpp f_door.hpp f_room.hpp e_maze.hpp f_maze.hpp)