#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include <iostream>
#include <map>
#include "ATarget.hpp"
#include "ATarget.hpp"

class TargetGenerator {
    private:
        TargetGenerator& operator=(TargetGenerator const &ob);
        TargetGenerator(TargetGenerator const &ob);
        std::map<std::string, ATarget *> arr_spell;
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *ob);
        void forgetTargetType(std::string const & name);
       ATarget* createTarget(std::string const &name);
};

#endif