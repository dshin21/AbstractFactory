//
// Created by Daniel Shin on 11/29/18.
//

#ifndef LAB9_ENCHANTED_FAERY_FACTORY_HPP
#define LAB9_ENCHANTED_FAERY_FACTORY_HPP


#include "maze_factory.hpp"
#include "e_room.hpp"
#include "e_door.hpp"
#include "e_maze.hpp"
#include "e_wall.hpp"

class e_factory : public maze_factory {

public:

    e_factory() {
        cout << "Creating e_Factory" << endl;
    }

    ~e_factory() override = default;

    maze *make_maze() const override {
        return new e_maze();
    }

    wall *make_wall() const override {
        return new e_wall();
    }

    room *make_room() const override {
        return new e_room();
    }

    door *make_door(room &r1, room &r2) const override {
        return new e_door(r1, r2);
    }
};


#endif //LAB9_ENCHANTED_FAERY_FACTORY_HPP
