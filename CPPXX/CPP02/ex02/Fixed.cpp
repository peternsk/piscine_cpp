/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:33:45 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/10 15:10:06 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*------------------------------------------------------*/
/*------------         Constructors         ------------*/
/*------------------------------------------------------*/

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

/*------------------------------------------------------*/
/*------------          Destructor          ------------*/
/*------------------------------------------------------*/

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

/*------------------------------------------------------*/
/*------------           Methods            ------------*/
/*------------------------------------------------------*/

float Fixed::toFloat( void ) const{
    return((float)this->entier / (float)(1 << this->entConst));
}

int Fixed::toInt( void ) const{
    return (this->entier >> this->entConst);
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
    this->entier = raw;
}


/*************** COMP. OVERLOAD ***************/

bool Fixed::operator > (const Fixed& obj){
    return(this->entier > obj.entier);    
}

bool Fixed::operator >= (const Fixed& obj){
    return(this->entier >= obj.entier);    
}

bool Fixed::operator == (const Fixed& obj){
    return(this->entier == obj.entier);    
}

bool Fixed::operator != (const Fixed& obj){
    return(this->entier != obj.entier);    
}

bool Fixed::operator <= (const Fixed& obj){
    return(this->entier <= obj.entier);    
}

bool Fixed::operator < (const Fixed& obj){
    return(this->entier < obj.entier);    
}


/*************** ARITH. OVERLOAD ***************/

Fixed Fixed::operator + (const Fixed& obj) const{
    Fixed tmp;
    tmp.entier = entier + obj.entier;
    return tmp;    
}

Fixed Fixed::operator - (const Fixed& obj) const{
    Fixed tmp;
    tmp.entier = entier - obj.entier;
    return tmp;    
}

Fixed Fixed::operator * (const Fixed& obj) const{
    Fixed tmp;
    tmp.entier = entier * obj.entier >> entConst;
    return tmp;    
}

Fixed Fixed::operator / (const Fixed& obj) const{
    Fixed tmp;
    
    if(obj.entier == 0)
        std::cout << "invalid opperation..." << std::endl;
    else
        tmp.entier = ((entier  << entConst) / obj.entier);
    return tmp;    
}

/*************** INCR . OVERLOAD ***************/

Fixed& Fixed::operator++(){
    entier++;
    return *this;
}

Fixed& Fixed::operator--(){
    entier--;
    return *this;
}

Fixed  Fixed::operator++(int){
    Fixed tmp = *this;
    ++entier;
    return tmp;
}

// Fixed  Fixed::operator--(int){
    
// }


/*------------------------------------------------------*/
/*------------           Functions          ------------*/
/*------------------------------------------------------*/

std::ostream& operator<<(std::ostream &output, Fixed const& obj){

    output << obj.toFloat();
    return output; 
}

