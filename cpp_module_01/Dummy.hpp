#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

using std::cout;
using std::string;

class Dummy: public ATarget{
    private:
        Dummy(const Dummy &r){ *this = r; };

        Dummy &operator=(const Dummy &r){
            type = r.type;
            return *this;
        }

    public:
        Dummy(){
            type = "Target Practice Dummy";
        };
        ~Dummy(){};

        Dummy *clone(){
            Dummy *clone = new Dummy;
            return clone;
        }
};

#endif