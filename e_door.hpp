//
// Created by Daniel Shin on 11/29/18.
//

#ifndef LAB9_DOOR_NEEDING_SPELL_HPP
#define LAB9_DOOR_NEEDING_SPELL_HPP


#include "door.hpp"
#include <iostream>

using namespace std;

class e_door : public door {

public:
    explicit e_door(room &a, room &b) {
        r1 = &a;
        r2 = &b;
        describe();
    }

    ~e_door() override {
        delete r1;
        delete r2;
    };

    void describe() override {
        cout << "e_door opens Room " << r1 << " and Room " << r2 << endl;
    }
};


#endif //LAB9_DOOR_NEEDING_SPELL_HPP
