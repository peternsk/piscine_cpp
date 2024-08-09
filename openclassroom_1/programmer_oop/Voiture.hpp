#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <string>
#include <iostream>
#include "Vehicule.hpp"


class Voiture : public Vehicule{
    public:
        Voiture();
        virtual void affiche() const;
        virtual ~Voiture();
    protected:
        int m_portes;
};

#endif