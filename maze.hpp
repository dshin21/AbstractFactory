//
// Created by Daniel Shin on 11/29/18.
//

#ifndef LAB9_MAZE_HPP
#define LAB9_MAZE_HPP


#include "room.hpp"
#include <vector>
#include <iostream>

class maze {
public:
    vector<room *> rooms;

    virtual ~maze() = default;

    virtual void add_room(room *rm) = 0;
};


#endif //LAB9_MAZE_HPP
