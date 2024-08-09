/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Moto.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:58:45 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 12:09:59 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Moto.hpp"

Moto::Moto(int prix, double vitesseMax) : Vehicule(prix), m_vitesse(vitesseMax){
}

Moto::~Moto(){
}

void Moto::affiche() const
{
    std::cout << "Ceci est une moto allant a " << m_vitesse << " km/h et coutant " << m_prix << " euros." << std::endl;
}