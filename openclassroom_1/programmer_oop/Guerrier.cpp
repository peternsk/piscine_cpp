/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Guerrier.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:40:15 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/08 15:31:52 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include "Guerrier.hpp"

Guerrier::Guerrier(std::string m_name) : Player(m_name){
    
}

void Guerrier::frapperAvecUnMarteau() const{
    
}

void Guerrier::sePresenter() const {
    // std::cout << "Bonjour, je m'appelle  " << m_name << "." << std::endl; 
    // std::cout << "J'ai encore " << m_vie << " point de vie." << std::endl;

    Player::sePresenter();
    std::cout << "Je suis un Guerrier redoutable." << std::endl;
}