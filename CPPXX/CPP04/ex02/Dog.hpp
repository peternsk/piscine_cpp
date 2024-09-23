// #ifndef DEF_DOG_HPP
// #define DEF_DOG_HPP

#include <iostream>
#include <string>
#include "header.hpp"
#include "Brain.hpp"


class Dog : public Animal {
    public:
        Dog();
        Dog(Cat const& objDog);
        ~Dog();
        Dog& operator=(const Dog& objDog);

        void makeSound() const;
        Brain* getBrain(void) const;
    private:
        Brain *m_brain;
};

// #endif