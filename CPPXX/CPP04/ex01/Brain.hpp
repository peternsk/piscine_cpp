#ifndef DEF_BRAIN_HPP
#define DEF_BRAIN_HPP

#include <iostream>
#include <string>
#include "header.hpp"

class Brain {
    public:
        Brain();
        Brain(Brain const& objBrain);
        
        ~Brain();
        Brain& operator=(const Brain& objBrain);

    protected:
        std::string idea[100];
};

#endif