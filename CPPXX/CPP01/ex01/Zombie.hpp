#ifndef DEFF_ZOMBIE_HPP
#define DEFF_ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        
        void annonce();

    private:
        std::string m_name;
};

Zombie*    zombieHorde( int N, std::string name );

#endif