/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Voiture.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:53:54 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 12:08:26 by pnsaka           ###   ########.fr       */
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
     std::cout << "Ceci est une voiture avec " << m_portes << " portes et coutant " << m_prix << " euros." << std::endl;
}
