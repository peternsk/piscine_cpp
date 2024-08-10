#ifndef DEF_METSTAT
#define DEF_METSTAT

#include <string>
#include <iostream>

class Metstat {
    public:
        Metstat();
        ~Metstat();

        static void maMethode();
        int nbInstance();
    private:
        static int compteur;
};

#endif