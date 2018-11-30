//
// Created by Daniel Shin on 11/29/18.
//

#ifndef LAB9_FUTURISTIC_DYSTOPIAN_FACTORY_HPP
#define LAB9_FUTURISTIC_DYSTOPIAN_FACTORY_HPP


#include "maze_factory.hpp"
#include "f_wall.hpp"
#include "f_room.hpp"
#include "f_maze.hpp"
#include "f_door.hpp"

class f_factory : public maze_factory {

public:
    f_factory() {
        cout << "Creating f_Factory" << endl;
    }

    ~f_factory() override = default;

    maze *make_maze() const override {
        return new f_maze();
    }

    wall *make_wall() const override {
        return new f_wall();
    }

    room *make_room() const override {
        return new f_room();
    }

    door *make_door(room &r1, room &r2) const override {
        return new f_door(r1, r2);
    }
};


#endif //LAB9_FUTURISTIC_DYSTOPIAN_FACTORY_HPP
