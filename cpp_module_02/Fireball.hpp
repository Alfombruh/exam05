#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "Aspell.hpp"

using std::cout;
using std::string;

class Fireball: public ASpell{
    private:
        Fireball(const Fireball &r){ *this = r; };

        Fireball &operator=(const Fireball &r){
            name = r.name;
            effects = r.effects; 
            return *this;
        };
    public:
        Fireball(){
            name = "Fireball";
            effects = "burnt to a crisp";
        };
        ~Fireball(){};

        Fireball *clone()const {
            Fireball *copy = new Fireball;
            return copy;
        }
};

#endif