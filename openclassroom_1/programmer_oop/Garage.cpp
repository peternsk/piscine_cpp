/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Garage.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:01:28 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 15:41:12 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Garage.hpp"

Garage::Garage(){
}

Garage::~Garage(){
}

void Garage::addVehicule(){

}

void Garage::remVehicule(){

}

void Garage::afficheInventaire(std::vector<Vehicule*> list){
	unsigned int roue;

    for(unsigned long i(0); i < list.size(); ++i)
    {
		list[i]->affiche();
		roue = list[i]->getNbRoue();
		std::cout << "|  NB ROUE: " << roue << std::endl;
    }
	std::cout << "--------------------------------------------------------------------------" << std::endl;
}
