#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class Dummy: public ATarget{
    public:
        Dummy(){};
        ~Dummy(){};

        Dummy *clone(){
            Dummy *clone = new Dummy;
            return clone;
        }
};

#endif