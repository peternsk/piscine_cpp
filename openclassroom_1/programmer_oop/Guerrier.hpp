#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include <iostream>
#include <string>
#include "Player.hpp"

class Guerrier : public Player {
    public:
        void frapperAvecUnMarteau() const;
        Guerrier(std::string name);
        void sePresenter() const;
    private:
};

#endif