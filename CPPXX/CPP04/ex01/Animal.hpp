#ifndef DEF_ANIMAL_HPP
#define DEF_ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;

    public:
        Animal();
        Animal(Animal const& animalCopy);
        ~Animal();
        
        Animal& operator=(const Animal& objAnimal);

        virtual void makeSound() const;
        std::string getType() const;
};

#endif