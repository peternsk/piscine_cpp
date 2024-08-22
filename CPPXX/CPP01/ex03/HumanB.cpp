/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:31:28 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/21 22:44:31 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
 
HumanB::HumanB(std::string nName) : name(nName), arme(0){
}

HumanB::~HumanB(){
}

void HumanB::attack(){
    // if(arme)
    //     std::cout << name << " attacks with their " << arme.getType() << std::endl;
    // else
        std::cout << name << " attack without weapon " << std::endl;
}

void HumanB::setWeapon(Weapon obj){
    arme = obj;
}