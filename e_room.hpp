//
// Created by Daniel Shin on 11/29/18.
//

#ifndef LAB9_ENCHANTED_FAERY_ROOM_HPP
#define LAB9_ENCHANTED_FAERY_ROOM_HPP

#include <iostream>
#include "room.hpp"

using namespace std;

class e_room : public room {
public:
    explicit e_room() {
        describe();
    }

    void describe() override {
        cout << "You have entered e_Room" << endl;
    }
};


#endif //LAB9_ENCHANTED_FAERY_ROOM_HPP
