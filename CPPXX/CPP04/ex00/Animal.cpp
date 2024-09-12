/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:58:40 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/11 23:18:45 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(){
    this->type = "n_type";
}


Animal::~Animal(){
}

void Animal::makeSound(){
    std::cout << "its not a specific type..." << std::endl;
}

std::string Animal::getType(){
    return this->type;
}