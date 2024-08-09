#ifndef DEF_MOTO
#define DEF_MOTO

#include <string>
#include <iostream>
#include "Vehicule.hpp"


class Moto : public Vehicule{
    public:
        Moto();
        virtual ~Moto();
        virtual void affiche() const;
    protected:
        double m_vitesse;
};

#endif