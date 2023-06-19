#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include "BrickWall.hpp"
#include "Dummy.hpp"
#include <map>

typedef std::map<string, ATarget *> Targets;
typedef std::map<string, ATarget *>::iterator TargetsIT;

class TargetGenerator
{
    private:
        Targets targets;

        TargetGenerator(const TargetGenerator &r) { *this = r; };
        TargetGenerator &operator=(const TargetGenerator &r){ 
            targets = r.targets;
            return *this;
        };
    public:
        TargetGenerator(){};
        ~TargetGenerator()
        {
            // for (TargetsIT it = targets.begin(); it != targets.end(); it++)
            //     delete &*it;
        };
        void learnTargetType(ATarget *target) { targets.insert(std::make_pair(target->getType(), target->clone())); };
        void forgetTargetType(string const &type) { targets.erase(targets.find(type)); };
        ATarget *createTarget(string const &type)
        {
            if (type == "Inconspicuous Red-brick Wall")
                return new BrickWall;
            else if (type == "Dummy")
                return new Dummy;
            return NULL;
        };
};

#endif