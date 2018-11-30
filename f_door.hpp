//
// Created by Daniel Shin on 11/29/18.
//

#include "door.hpp"

#ifndef LAB9_FUTURISTIC_DOOR_HPP
#define LAB9_FUTURISTIC_DOOR_HPP


class f_door : public door {

public:
    explicit f_door(room &a, room &b) {
        r1 = &a;
        r2 = &b;
        describe();
    }

    ~f_door() override {
        delete  r1;
        delete  r2;
    }

    void describe() override {
        cout << "f_door opens Room " << r1 << " and Room " << r2 << endl;
    }
};

#endif //LAB9_FUTURISTIC_DOOR_HPP