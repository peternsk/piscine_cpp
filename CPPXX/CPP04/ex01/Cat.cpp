/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:15:16 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/13 15:04:32 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/***********************************/
/**** CONSTROCTOR & DESTRUCTOR  ****/
/***********************************/

Cat::Cat(){
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Cat";
    m_brain = new Brain;
}

Cat::Cat(Cat const& objCat){
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = objCat.getType();
}


Cat::~Cat(){
    std::cout << "Animal destructor called" << std::endl;
    delete m_brain; 
}

/***********************************/
/****   OVERLOADING OPERATOR    ****/
/***********************************/

Cat& Cat::operator=(const Cat& objCat){
    delete m_brain;
    this->m_brain = new Brain (*objCat.getBrain());
}

/***********************************/
/****          METHODS          ****/
/***********************************/

void Cat::makeSound() const{
    std::cout << "miaou miaou miaou" << std::endl;
}

Brain* Cat::getBrain(void) const{
    return this->m_brain; 
}

