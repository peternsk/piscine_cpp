/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Voiture.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:53:54 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 15:35:05 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Voiture.hpp"

Voiture::Voiture(int prix, int portes)
    : Vehicule(prix), m_portes(portes){
}

Voiture::~Voiture(){
}


void Voiture::affiche() const
{
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "|TYPE: Voiture | PRIX(euro): " << m_prix << "| NB PORTES: " << m_portes  << std::endl;
}

int Voiture::getNbRoue() const{
	return 4;
}
