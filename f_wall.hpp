//
// Created by Daniel Shin on 11/29/18.
//

#ifndef LAB9_FUTURISTIC_WALL_HPP
#define LAB9_FUTURISTIC_WALL_HPP


#include "wall.hpp"
#include <iostream>

using namespace std;

class f_wall : public wall {
public:
    f_wall() {
        describe();
    }

    void describe() override {
        cout << "f_wall!" << endl;
    }

};

#endif //LAB9_FUTURISTIC_WALL_HPP
