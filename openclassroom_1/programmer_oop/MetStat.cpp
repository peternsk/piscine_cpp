/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MetStat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 23:01:44 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/09 23:48:33 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MetStat.hpp"

//Initialiser l'attribut en dehors de toute fonction ou classe (espace global)
int Metstat::compteur = 5;

Metstat::Metstat(){
    compteur++;
} 

Metstat::~Metstat(){
    compteur--;
}

void Metstat::maMethode(){
    std::cout << "Test 1..2..3.." << std::endl;
}

int Metstat::nbInstance(){
    return compteur;
}