/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:53:55 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/13 14:32:57 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/***********************************/
/**** CONSTROCTOR & DESTRUCTOR  ****/
/***********************************/

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const& objBrain){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = objBrain;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

/***********************************/
/****   OVERLOADING OPERATOR    ****/
/***********************************/

Brain& Brain::operator=(const Brain& objBrain){
    *this = objBrain;
    return *this;    
}

