/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:12:11 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/21 22:16:40 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nName, std::string weaponType) : name(nName), arme(weaponType){
}

HumanA::~HumanA(){
}

void HumanA::attack(){
    std::cout << name << " attacks with their " << arme.getType() << std::endl; 
}
