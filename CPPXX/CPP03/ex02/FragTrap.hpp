#ifndef DEF_FRAGTRAP_HPP
#define DEF_FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string n_name);
        ~FragTrap();
        void highFivesGuys(void);
};


#endif