#include <iostream>
#include "maze_game.hpp"
#include "e_factory.hpp"
#include "f_factory.hpp"

int main() {
    maze_game game;

    maze_factory *e_fact = new e_factory();
    maze *m = game.create_maze(*e_fact);

    cout << endl;

    maze_factory *f_fact = new f_factory();
    maze *d = game.create_maze(*f_fact);
    
    delete m;
    delete d;
    delete f_fact;
    delete e_fact;

    return 0;
}