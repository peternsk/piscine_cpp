/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Garage.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:01:28 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 22:23:42 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Garage.hpp"

Garage::Garage(){
}

Garage::~Garage(){
}

void Garage::addVehicule(std::vector<Vehicule*> list){

}

void Garage::remVehicule(std::vector<Vehicule*> list){

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
