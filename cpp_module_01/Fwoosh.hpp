#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include "Aspell.hpp"

using std::cout;
using std::string;

class Fwoosh: public ASpell{
    private:
        Fwoosh(const Fwoosh &r){ *this = r; };

        Fwoosh &operator=(const Fwoosh &r){
            name = r.name;
            effects = r.effects; 
            return *this;
        };
    public:
        Fwoosh(){
            name = "Fwoosh";
            effects = "fwooshed";
        };
        ~Fwoosh(){
            delete this; // just in case this objects was created by the clone method, has to check if this doesnt mess up the progam when its been created by default
        };

        Fwoosh *clone()const {
            Fwoosh *copy = new Fwoosh;
            return copy;
        }
};

#endif