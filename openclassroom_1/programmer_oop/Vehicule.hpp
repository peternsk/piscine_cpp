#ifndef DEF_VEHICULE
#define DEF_VEHICULE

#include <string>
#include <iostream>


class Vehicule {
    public:
        Vehicule();
        virtual void affiche() const;
        virtual ~Vehicule();
    protected:
        int m_prix;
    // private:
};

#endif