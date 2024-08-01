/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arme.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:35:19 by peternsaka        #+#    #+#             */
/*   Updated: 2024/07/30 14:52:00 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arme.hpp"

Arme::Arme(){
	std::cout << "constructor set" << std::endl;
}

Arme::Arme(std::string nom, int degats){
	std::cout << "constructor set" << std::endl;
}

void Arme::changer(std::string nom, int degats){
	m_nom = nom;
	m_degat = degats;
}

void Arme::afficher() const{
	std::cout << "Arme : " << m_nom << " (Degats : " << m_degat << ")" << std::endl;
}
