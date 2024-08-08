#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>
#include <iostream>
#include "arme.hpp"

class Personnage
{
/*======== METHODE ===========*/
public:
	Personnage();
	Personnage(Personnage const& PersonnageACopier); //le constructeur de copie
	Personnage(std::string nom_arme, int degat_arme);
	
	
	void	recevoirDegat(int nbDegats);
	// void	attaquer(Personnage &cible);
	void	boirePotionDeVie(int quantitePotion);
	// void 	changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	void	afficherEtat();
	bool	estVivant();
	~Personnage();

private:
/*======= ATTRIBUT ===========*/
	int m_vie;
	int m_mana;
	std::string m_Nom;
	// Arme m_arme;
	Arme *m_arme;
};

#endif
