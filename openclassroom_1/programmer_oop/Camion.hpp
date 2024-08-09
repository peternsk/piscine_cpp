#ifndef DEF_CAMION
#define DEF_CAMION

#include <iostream>
#include <string>
#include "Vehicule.hpp"

class Camion : public Vehicule{
    public:
        Camion(int prix, int annee, double poids);
        virtual void affiche()const;
        virtual ~Camion();

    protected:
        int m_annee;
        double m_poids;
};

#endif