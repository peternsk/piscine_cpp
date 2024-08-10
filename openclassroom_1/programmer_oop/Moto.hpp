#ifndef DEF_MOTO
#define DEF_MOTO

#include <string>
#include <iostream>
#include "Vehicule.hpp"


class Moto : public Vehicule{
    public:
        Moto(int prix, double vitesseMax);
        virtual ~Moto();
        virtual void affiche() const;
		virtual int getNbRoue() const;
    protected:
        double m_vitesse;
};

#endif
