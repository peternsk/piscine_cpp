#ifndef DEF_CAT_HPP
#define DEF_CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"


class Cat : public Animal {
    public:
        Cat();
        ~Cat();
        
        void makeSound();
        std::string getType();
        
};

#endif