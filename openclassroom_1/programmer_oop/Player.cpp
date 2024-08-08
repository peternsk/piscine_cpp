/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:21:35 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/08 14:44:11 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"



Player::Player() : m_vie(100), m_name("Jack"){
    
}

Player::Player(std::string name) : m_vie(100), m_name(name){
    
}

void Player::recevoirDegat(int degat){
    m_vie -= degat;
}

void Player::coupDePoing(Player &cible) const{
    cible.recevoirDegat(10);
}

void Player::sePresenter() const {
    std::cout << "Bonjour, je m'appelle  " << m_name << "." << std::endl; 
    std::cout << "J'ai encore " << m_vie << " point de vie." << std::endl; 
}