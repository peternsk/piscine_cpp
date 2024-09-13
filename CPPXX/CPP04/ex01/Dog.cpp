/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:33:27 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/13 11:56:59 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Dog::Dog(){
    this->type = "Dog";
    m_brain = new Brain;
}

Dog::~Dog(){ 
    delete m_brain; 
}

void Dog::makeSound() const{
    std::cout << "wouuf wouf wouf" << std::endl;
}
 