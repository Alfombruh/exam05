#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>


using std::cout;
using std::string;

class ASpell;

class ATarget{
    protected:
        string type;

        ATarget(const ATarget &r){ *this = r; };
        ATarget &operator=(const ATarget &r){ 
            type = r.type;
            return *this;
        };
    public:
        ATarget(){};
        ATarget(const string &type): type(type){};
        virtual ~ATarget(){};

        void getHitBySpell(const ASpell &spell)const;
        const string getType()const{ return (type); };
        virtual ATarget  *clone(void) const = 0;
};


#endif