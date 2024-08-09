/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Camion.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:29:46 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 12:57:46 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Camion.hpp"

Camion::Camion(int prix, int annee, double poids) 
    : Vehicule(prix), m_annee(annee), m_poids(poids){
}


Camion::~Camion(){
}

void Camion::affiche() const{
    std::cout << "Ceci est un Camion coutant " << m_prix << " euros .fabrique en " << m_annee
        << "pouvant transporter " << m_poids << std::endl;
}