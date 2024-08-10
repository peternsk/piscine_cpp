#ifndef DEF_GARAGE
#define DEF_GARAGE

#include <iostream>
#include <string>
#include <vector>
#include "Vehicule.hpp"

class Garage {
    public:
        Garage();
        ~Garage();
        void addVehicule();
        void remVehicule();
        void afficheInventaire(std::vector<Vehicule*> list);
    protected:
        std::vector<Vehicule*> list;
};

#endif
