/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:15:21 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/11 21:00:17 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/***********************************/
/****CONSTROCTOR & DECONSTRUCTOR****/
/***********************************/

ClapTrap::ClapTrap(std::string n_name) : Name(n_name){
    std::cout << "ClapTrap Constructor called" << std::endl;
    HitPoint = 10;
    EnergyPoint = 10;
    AttackDamage = 0;    
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Deconstructor called" << std::endl;
};

/***********************************/
/*****         METHODS        ******/
/***********************************/

void ClapTrap::attack(const std::string& target){
    if(this->EnergyPoint >= 0 && this->HitPoint >= 0){
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!"<< std::endl;
        this->EnergyPoint -= 1; 
    }
    else{
        std::cout << "Player dont have enough Energy Points..." << std::endl;
    }
    return ;
}

void ClapTrap::takeDamage(unsigned int amount){
        std::cout << "ClapTrap " << Name << " took " << amount << " dommage " << std::endl;
        this->HitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->EnergyPoint >= 0 && this->HitPoint >= 0){
        std::cout << Name << " regained " << amount << " hit points " << std::endl;
        this->HitPoint += amount;
        this->EnergyPoint -= 1;
    }
    else{ 
        std::cout << "Player dont have enough Energy Points..." << std::endl;
    }
}

std::string ClapTrap::getName(){
    return this->Name;
}

int ClapTrap::geHipPoint(){
    return this->HitPoint; 
}

int ClapTrap::getEnergyPoint(){
    return this->EnergyPoint;    
}

int ClapTrap::getAttackDamage(){
    return this->AttackDamage; 
}

