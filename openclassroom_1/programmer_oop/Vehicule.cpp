/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vehicule.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:48:02 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 15:39:02 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vehicule.hpp"

Vehicule::Vehicule(int prix)
    : m_prix(prix){
}

Vehicule::~Vehicule(){
}

void Vehicule::affiche() const
{
    std::cout << "Ceci est un vehicule coutant " << m_prix << " euros" << std::endl;
}

int Vehicule::getNbRoue() const{
	return 0;
}

