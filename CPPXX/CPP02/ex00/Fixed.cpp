/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:33:45 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/24 00:00:46 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "" << std::endl;
}

Fixed::Fixed(Fixed const& FixedToCopie){
    std::cout << "" << std::endl;
}

Fixed::Fixed(int m_entier){
    std::cout << "" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& C){
    if (this != &C) {
        entier = C.entier;
    }
    return *this;
}

int Fixed::getRawBits( void ) const{
    std::cout << "" << std::endl;
}

void Fixed::setRawBits( int const raw ){
    std::cout << "" << std::endl;
}