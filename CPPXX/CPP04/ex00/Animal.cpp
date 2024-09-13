/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:58:40 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/12 23:05:10 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(){
    this->type = "n_type";
}


Animal::~Animal(){
}

void Animal::makeSound() const{
    std::cout << "its not a specific type..." << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}