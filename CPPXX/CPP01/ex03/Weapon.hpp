#ifndef DEFF_WEAPON_HPP
#define DEFF_WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
        Weapon(std::string nType); 
        ~Weapon();
    
        const std::string& getType();
        void setType(std::string newType);
    
    private:
        std::string type;
};



#endif