#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>


using std::cout;
using std::string;

class ASpell;

class ATarget{
    private:
        string type;

        ATarget(const ATarget &r){ *this = r; };
        ATarget &operator=(const ATarget &r){ 
            type = r.type;
            return *this;
        };
    public:
        ATarget(){};
        ATarget(const string &type): type(type){};
        ~ATarget(){};

        void getHitBySpell(const ASpell &spell)const;
        const string getType()const{ return (type); };
};


#endif