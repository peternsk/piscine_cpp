#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <string>
#include <iostream>
#include "Vehicule.hpp"


class Voiture : public Vehicule{
    public:
        Voiture(int prix, int portes);
        virtual void affiche() const;
		virtual int getNbRoue() const;
        virtual ~Voiture();
    protected:
        int m_portes;
};

#endif
