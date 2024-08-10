/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Moto.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:58:45 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 15:36:50 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Moto.hpp"

Moto::Moto(int prix, double vitesseMax) : Vehicule(prix), m_vitesse(vitesseMax){
}

Moto::~Moto(){
}

void Moto::affiche() const
{
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "|TYPE: MOTO | PRIX(euro): " << m_prix << " VITESSE MAX: " << m_vitesse  << std::endl;
}

int Moto::getNbRoue() const{
	return 2;
}
