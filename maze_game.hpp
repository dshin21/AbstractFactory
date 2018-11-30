//
// Created by Daniel Shin on 11/29/18.
//

#ifndef LAB9_MAZE_GAME_HPP
#define LAB9_MAZE_GAME_HPP

#include "maze_factory.hpp"

class maze_game {
public:
    maze *create_maze(maze_factory &factory) {
        maze *aMaze = factory.make_maze();
        room *r1 = factory.make_room();
        wall *w = factory.make_wall();
        room *r2 = factory.make_room();
        door *d = factory.make_door(*r1, *r2);
        aMaze->add_room(r1);
        aMaze->add_room(r2);
        return aMaze;
    }
};


#endif //LAB9_MAZE_GAME_HPP
