#ifndef DEF_DUREE
#define DEF_DUREE
 
class Duree
{
    public:
 
        Duree(int heures = 0, int minutes = 0, int secondes = 0);
        bool estEgal(Duree const& b) const;
        bool estPlusPetitQue(Duree const& b) const;
        bool estPlusGrandQue(Duree const& b) const;
        Duree& operator+=(Duree const& a);
        void afficher(std::ostream &flux) const;

    private:
 
        int m_heures;
        int m_minutes;
        int m_secondes;
};

// bool operator==(Objet const& a, Objet const& b);
bool operator == (Duree const& a, Duree const& b);
bool operator != (Duree const& a, Duree const& b);
bool operator < (Duree const& a, Duree const& b);
bool operator > (Duree const& a, Duree const& b);

#endif