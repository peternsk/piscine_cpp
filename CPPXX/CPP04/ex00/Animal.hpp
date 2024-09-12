#ifndef DEF_ANIMAL_HPP
#define DEF_ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;

    public:
        Animal();
        ~Animal();

        virtual void makeSound();
        virtual std::string getType();

};

#endif