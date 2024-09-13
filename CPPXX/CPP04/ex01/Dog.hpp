#ifndef DEF_DOG_HPP
#define DEF_DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        ~Dog();

        void makeSound() const;
        // std::string getType();

};

#endif