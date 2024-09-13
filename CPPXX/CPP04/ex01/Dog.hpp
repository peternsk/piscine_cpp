#ifndef DEF_DOG_HPP
#define DEF_DOG_HPP

#include <iostream>
#include <string>
#include "header.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(Cat const& objGog)

        ~Dog();
        Dog& operator=(const Brain& objCat);

        void makeSound() const;
    private:
        Brain *m_brain;
};

#endif