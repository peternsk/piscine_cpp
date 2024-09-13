/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:12:11 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/22 09:15:04 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nName, Weapon &m_arme) : name(nName), arme(m_arme){
}

HumanA::~HumanA(){
}

void HumanA::attack(){
    std::cout << name << " attacks with their " << arme.getType() << std::endl; 
}
