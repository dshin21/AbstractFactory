//
// Created by Daniel Shin on 2018-11-30.
//

#ifndef LAB9_E_MAZE_HPP
#define LAB9_E_MAZE_HPP

#include "maze.hpp"

class e_maze : public maze {

public:
    e_maze() {
        cout << "Creating e_maze" << endl;
    }

    ~e_maze() override {
        for (auto a :rooms) delete a;
    }

    void add_room(room *rm) override {
        rooms.push_back(rm);
    }
};

#endif //LAB9_E_MAZE_HPP
