#ifndef DEF_PLAYER
#define DEF_PLAYER

#include <iostream>
#include <string>

class Player {
    public:
    Player();
    Player(std::string name);
    void recevoirDegat(int degat);
    void coupDePoing(Player &cible) const;

    void sePresenter() const;

    // private:
    protected: //j'ai mis les attribut protected pour y avoir access dans les class filles
    int m_vie;
    std::string m_name;
};

#endif