#ifndef DEFF_HUMANB_HPP
#define DEFF_HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string nName);
        ~HumanB();

        void attack();
        void setWeapon(Weapon &obj);

    private:
        Weapon *arme;
        std::string name;

};

#endif