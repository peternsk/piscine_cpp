/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Magicien.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:57:33 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/08 14:13:39 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include "Magicien.hpp"

Magicien::Magicien() : Player(), m_mana(100){
    
}

Magicien::Magicien(std::string name) : Player(name), m_mana(100){
    
}


void Magicien::bouleDeFeu() const{
    
}

void Magicien::bouleDeGlace() const{
    
}