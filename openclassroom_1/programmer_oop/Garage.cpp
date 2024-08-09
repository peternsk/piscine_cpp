/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Garage.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:01:28 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 13:17:59 by pnsaka           ###   ########.fr       */
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
    for(unsigned long i(0); i < list.size(), ++i)
    {
        list[i]->affiche();
    }
}