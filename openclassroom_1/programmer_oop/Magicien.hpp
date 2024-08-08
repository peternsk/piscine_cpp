#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN

#include <iostream>
#include <string>
#include "Player.hpp"

class Magicien : public Player {
    public:
        Magicien();
        Magicien(std::string name);
        void bouleDeFeu() const;
        void bouleDeGlace() const;
    private:
        int m_mana;
};

#endif