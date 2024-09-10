/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:33:45 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/10 00:18:45 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    entier = 0;
}

Fixed::Fixed(Fixed const& FixedToCopie){
    std::cout << "Copy constructor called" << std::endl;
    this->entier = FixedToCopie.getRawBits();
}

Fixed::Fixed(int const n){
    std::cout << "Int constructor called" << std::endl;
    this->entier = n << this->entConst;
}

Fixed::Fixed(float const n){
    std::cout << "Float constructor called" << std::endl;
    this->entier = round(n * (1 << this->entConst));
}

float Fixed::toFloat( void ) const{
    return((float)this->entier / (float)(1 << this->entConst));
}

int Fixed::toInt( void ) const{
    return (this->entier >> this->entConst);
}


Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& C){
    if (this != &C) {
        entier = C.entier;
    }
    return *this;
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->entier;
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    entier = raw;
}