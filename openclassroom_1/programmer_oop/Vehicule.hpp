#ifndef DEF_VEHICULE
#define DEF_VEHICULE

#include <string>
#include <iostream>


class Vehicule {
    public:
        Vehicule(int prix);
        virtual void affiche() const;
        virtual ~Vehicule();
		virtual int getNbRoue() const = 0;
    protected:
        int m_prix;
		int m_nbRoue;
    // private:
};

#endif
