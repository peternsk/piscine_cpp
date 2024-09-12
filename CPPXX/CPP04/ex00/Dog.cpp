/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:33:27 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/11 23:21:30 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
}

Dog::~Dog(){  
}

void Dog::makeSound(){
    std::cout << "wouuf wouf wouf" << std::endl;
}

std::string Dog::getType(){
    return this->type;
}