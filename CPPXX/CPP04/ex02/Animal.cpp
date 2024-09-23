/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:58:40 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/16 11:42:40 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/***********************************/
/**** CONSTROCTOR & DESTRUCTOR  ****/
/***********************************/

Animal::Animal(){
    std::cout << "Animal dcefault constructor called" << std::endl;
    this->type = "n_type";
}

Animal::Animal(Animal const& animalCopy){
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = animalCopy.getType();
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

/***********************************/
/****   OVERLOADING OPERATOR    ****/
/***********************************/

Animal& Animal::operator=(const Animal& objAnimal){
    if (this != &objAnimal) {
        type = objAnimal.type;
    }
    return *this;
}

/***********************************/
/****          METHODS          ****/
/***********************************/

void Animal::makeSound() const{
    std::cout << "its not a specific type..." << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}