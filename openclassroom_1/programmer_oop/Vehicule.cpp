/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vehicule.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:48:02 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/08 21:30:48 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vehicule.hpp"

Vehicule::Vehicule(){
    
}

Vehicule::~Vehicule(){
    
}

void Vehicule::affiche() const
{
    std::cout << "Ceci est un vehicule." << std::endl;
}