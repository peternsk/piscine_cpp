/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Camion.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:29:46 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 15:38:07 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Camion.hpp"

Camion::Camion(int prix, int annee, double poids)
    : Vehicule(prix), m_annee(annee), m_poids(poids){
}


Camion::~Camion(){
}

void Camion::affiche() const{
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "|TYPE: CAMION | PRIX(euro): " << m_prix << " ANNEE: " << m_annee << "POIDS: " << m_poids << std::endl;
}


int Camion::getNbRoue() const{
	return 10;
}
