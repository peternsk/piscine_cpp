/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:33:27 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/16 12:40:46 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/***********************************/
/**** CONSTROCTOR & DESTRUCTOR  ****/
/***********************************/

Dog::Dog(){
    std::cout << "Dog dcefault constructor called" << std::endl;
    this->type = "Dog";
    m_brain = new Brain;
}

Dog::Dog(Cat const& objDog){
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = objDog.getType();
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete m_brain; 
}

/***********************************/
/****   OVERLOADING OPERATOR    ****/
/***********************************/

Dog& Dog::operator=(const Dog& objCat){
    delete m_brain;
    this->m_brain = new Brain (*objCat.getBrain());
}

/***********************************/
/****          METHODS          ****/
/***********************************/

void Dog::makeSound() const{
    std::cout << "wouf wouf wouf" << std::endl;
}

Brain* Dog::getBrain(void) const{
    return this->m_brain; 
}