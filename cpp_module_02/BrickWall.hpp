#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include "ATarget.hpp"

using std::cout;
using std::string;

class BrickWall: public ATarget{
    private:
        BrickWall(const BrickWall &r){ *this = r; };

        BrickWall &operator=(const BrickWall &r){
            type = r.type;
            return *this;
        }

    public:
        BrickWall(){
            type = "Ubbscioucyiys Red-brick Wall";
        };
        ~BrickWall(){};

        BrickWall *clone()const{
            BrickWall *clone = new BrickWall;
            return clone;
        }
};

#endif