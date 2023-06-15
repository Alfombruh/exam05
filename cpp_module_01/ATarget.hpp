#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "Aspell.hpp"

using std::cout;
using std::string;

class ATarget{
    private:
        string type;

    public:
        ATarget(){};
        ATarget(const string &type): type(type){};
        ATarget(const ATarget &r){ *this = r; };
        ~ATarget(){};

        ATarget &operator=(const ATarget &r){ 
            type = r.type;
            return *this;
        };

        void getHitBySpell(const ASpell &spell){cout << type << " has been " << spell.getEffects() << "!\n"; };
        const string getType()const{ return (type); };
};

#endif