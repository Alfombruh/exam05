#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include "Aspell.hpp"

using std::cout;
using std::string;

class Polymorph: public ASpell{
    private:
        Polymorph(const Polymorph &r){ *this = r; };

        Polymorph &operator=(const Polymorph &r){
            name = r.name;
            effects = r.effects;
            return *this;
        };
    public:
        Polymorph(){
            name = "Polymorph";
            effects = "turnet into a critter";
        };
        ~Polymorph(){};

        Polymorph *clone()const {
            Polymorph *copy = new Polymorph;
            return copy;
        }
};

#endif