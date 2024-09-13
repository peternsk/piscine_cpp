/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:42:31 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/11 21:05:11 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/***********************************/
/****CONSTROCTOR & DECONSTRUCTOR****/
/***********************************/

FragTrap::FragTrap(std::string n_name) : ClapTrap(n_name){
    std::cout << "FragTrap Constructor called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap deconstructor called" << std::endl;
}

/***********************************/
/*****         METHODS        ******/
/***********************************/

void FragTrap::highFivesGuys(void){
    std::cout << Name << "is asking for an High Five" << std::endl;
}
