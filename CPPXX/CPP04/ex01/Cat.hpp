#ifndef DEF_CAT_HPP
#define DEF_CAT_HPP

#include <iostream>
#include <string>
#include "header.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(Cat const& objCat);
        ~Cat();
        Cat& operator=(const Cat& objCat);

        void makeSound() const;
        Brain *getBrain(void) const;
    private:
        Brain *m_brain;
};
 
#endif