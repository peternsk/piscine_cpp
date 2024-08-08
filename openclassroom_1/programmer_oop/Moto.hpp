#ifndef DEF_MOTO
#define DEF_MOTO

#include <string>
#include <iostream>
#include "Vehicule.hpp"


class Moto : public Vehicule{
    public:
    Moto();
        void affiche() const;
    protected:
        int m_vitesse;
};

#endif