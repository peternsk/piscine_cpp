#ifndef DEFF_HUMANA_HPP
#define DEFF_HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string nName, std::string weaponType);
        ~HumanA();

        void attack();

    private:
        Weapon arme;
        std::string name;
};

#endif