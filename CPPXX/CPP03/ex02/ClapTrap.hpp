#ifndef DEFF_CLAPTRAP_HPP
#define DEFF_CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

    public:
        /*----- constucteur ----- */
        ClapTrap(std::string n_name);

        /*----- deconstructor ----- */
        ~ClapTrap();

        /*----- deconstructor ----- */
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName();
        int geHipPoint();
        int getEnergyPoint();
        int getAttackDamage();
    protected:
        std::string Name;
        int HitPoint;
        int EnergyPoint;
        int AttackDamage;
};


#endif