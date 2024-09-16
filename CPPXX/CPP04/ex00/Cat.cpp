/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:15:16 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/12 23:05:16 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
}

Cat::~Cat(){  
}

void Cat::makeSound() const{
    std::cout << "miaou miaou miaou" << std::endl;
}

// std::string Cat::getType(){
//     return this->type;
// }