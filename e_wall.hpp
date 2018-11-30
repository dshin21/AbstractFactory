//
// Created by Daniel Shin on 11/29/18.
//

#ifndef LAB9_ORDINARY_WALL_HPP
#define LAB9_ORDINARY_WALL_HPP


#include "wall.hpp"
#include <iostream>

using namespace std;

class e_wall : public wall {
public:
    e_wall() {
        describe();
    }

    void describe() override {
        cout << "e_wall!" << endl;
    }
};
#endif //LAB9_ORDINARY_WALL_HPP
