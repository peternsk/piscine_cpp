#ifndef DEF_SCAVTRAP_HPP
#define DEF_SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
    public:
        ScavTrap(std::string n_name);
        ~ScavTrap();
        void guardGate();
        
    private:
};


#endif