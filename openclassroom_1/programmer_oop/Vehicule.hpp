#ifndef DEF_VEHICULE
#define DEF_VEHICULE

#include <string>
#include <iostream>


class Vehicule {
    public:
        Vehicule();
        void affiche() const;
    protected:
        int m_prix;
    // private:
};

#endif