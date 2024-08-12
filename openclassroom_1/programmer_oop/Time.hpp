#ifndef DEF_TIME_HPP
#define DEF_TIME_HPP

#include <iostream>
#include <string>

class Time{
    public:
        Time(int heures = 0, int minutes = 0, int secondes = 0);
    private:
        void afficher(std::ostream& out) const;

        int m_heures;
        int m_minutes;
        int m_secondes;

    friend std::ostream &operator<<( std::ostream &out, Time const& duree );
};


#endif