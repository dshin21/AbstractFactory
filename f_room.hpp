//
// Created by Daniel Shin on 11/29/18.
//

#ifndef LAB9_FUTURISTIC_ROOM_HPP
#define LAB9_FUTURISTIC_ROOM_HPP


#include "room.hpp"
#include <iostream>

using namespace std;

class f_room : public room {
public:
    explicit f_room() {
        describe();
    }

    void describe() override {
        cout << "You have entered f_Room: " << endl;
    }
};


#endif //LAB9_FUTURISTIC_ROOM_HPP
