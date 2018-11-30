//
// Created by Daniel Shin on 11/29/18.
//

#ifndef LAB9_DOOR_HPP
#define LAB9_DOOR_HPP

#include "room.hpp"

class door {
protected:
    room *r1 = nullptr;
    room *r2 = nullptr;
public:
    virtual ~door() = default;

    virtual void describe() = 0;
};


#endif //LAB9_DOOR_HPP
