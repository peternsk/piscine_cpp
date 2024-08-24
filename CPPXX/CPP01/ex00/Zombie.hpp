#ifndef DEF_ZOMBIE_HPP
#define DEF_ZOMBIE_HPP

#include <string>
#include <iostream>

/*====================================================*/
/*=                      CLASSES                     =*/
/*====================================================*/
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
 
Zombie *newZombie(std::string name);

void randomChump(std::string name);

#endif