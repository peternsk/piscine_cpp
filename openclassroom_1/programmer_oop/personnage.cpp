/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   personnage.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:06:53 by peternsaka        #+#    #+#             */
/*   Updated: 2024/07/31 11:16:39 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "personnage.hpp"
#include <iostream>
#include <string>

Personnage::Personnage() : m_mana(100), m_vie(100), m_arme("Epee rouiller", 10) {
	std::cout << "construteur launched"  << std::endl;
}

Personnage::Personnage(std::string nom_arme, int degat_arme) : m_mana(100), m_vie(100), m_arme(nom_arme, degat_arme){
	std::cout << "construteur launched"  << std::endl;
}

void	Personnage::recevoirDegat(int nbDegats){

	std::cout << "degat recu: " << nbDegats << std::endl;
	m_vie -= nbDegats;
	if(m_vie < 0){
		m_vie = 0;
	}
}

// void	Personnage::attaquer(Personnage &cible){
// 	cible.recevoirDegat(m_DegatArme);
// }

void	Personnage::boirePotionDeVie(int quantitePotion){
	std::cout << "Personnage a bu: " << quantitePotion << " de potion"<< std::endl;
	m_vie += quantitePotion;

	if(m_vie > 100){
		m_vie = 100;
	}
}

// void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
// {
// 	std::cout << "nouvelle arme: " << nomNouvelleArme << " degat: "<< degatsNouvelleArme << std::endl;
// 	m_nomArme = nomNouvelleArme;
// 	m_DegatArme = degatsNouvelleArme;
// }
bool Personnage::estVivant()
{
	if(m_vie <= 0){
		return(true);
	}
	return(false);
}
void	Personnage::afficherEtat(){
	std::cout << m_vie << std::endl;
	std::cout << m_mana << std::endl;
	m_arme.afficher();
}


// Personnage::~Personnage()
// {
//     /* Rien à mettre ici car on ne fait pas d'allocation dynamique
//     dans la classe Personnage. Le destructeur est donc inutile mais
//     je le mets pour montrer à quoi cela ressemble.
//     En temps normal, un destructeur fait souvent des delete et quelques
//     autres vérifications si nécessaire avant la destruction de l'objet. */
// }

