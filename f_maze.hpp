//
// Created by Daniel Shin on 2018-11-30.
//

#ifndef LAB9_F_MAZE_HPP
#define LAB9_F_MAZE_HPP


#include "maze.hpp"

class f_maze : public maze {

public:
    f_maze() {
        cout << "Creating f_maze" << endl;
    }

    ~f_maze() override {
        for (auto a :rooms) delete a;
    }

    void add_room(room *rm) override {
        rooms.push_back(rm);
    }
};


#endif //LAB9_F_MAZE_HPP
