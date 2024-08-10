#ifndef DEF_GARAGE
#define DEF_GARAGE 

#include <iostream>
#include <string>
#include <vector>
#include "vehicule.hpp"

class Garage {
    public:
        Garage();
        ~Garage();
        void addVehicule(std::vector<Vehicule*> list);
        void remVehicule(std::vector<Vehicule*> list);
        void afficheInventaire(std::vector<Vehicule*> list);
    protected:
        std::vector<Vehicule*> list;
};

#endif