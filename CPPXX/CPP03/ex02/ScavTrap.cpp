/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:25:14 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/11 20:14:59 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


/***********************************/
/****CONSTROCTOR & DECONSTRUCTOR****/
/***********************************/

ScavTrap::ScavTrap(std::string n_name) : ClapTrap(n_name){
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::~ScavTrap(){
}

/***********************************/
/*****         METHODS        ******/
/***********************************/

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << Name << " is in Gate keeper mode " << std::endl;
}