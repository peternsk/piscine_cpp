/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:54:30 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/22 09:17:54 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon(std::string nType) : type(nType){
}

Weapon::~Weapon(){
}

const std::string& Weapon::getType(){
    return(type);
}

void Weapon::setType(std::string newType){
    type = newType;
}