/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:33:45 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/11 10:13:51 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*------------------------------------------------------*/
/*------------         Constructors         ------------*/
/*------------------------------------------------------*/

Fixed::Fixed(){
    entier = 0;
}

Fixed::Fixed(Fixed const& FixedToCopie){
    this->entier = FixedToCopie.getRawBits();
}

Fixed::Fixed(int const n){
    this->entier = n << this->entConst;
}

Fixed::Fixed(float const n){
    this->entier = round(n * (1 << this->entConst));
}

/*------------------------------------------------------*/
/*------------          Destructor          ------------*/
/*------------------------------------------------------*/

Fixed::~Fixed(){
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
    return this->entier;
}

void Fixed::setRawBits( int const raw ){
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
    ++this->entier;
    return *this;
}

Fixed& Fixed::operator--(){
    --this->entier;
    return *this;
}

Fixed  Fixed::operator++(int){
    Fixed tmp = *this;
    this->entier++;
    return tmp;
}

Fixed  Fixed::operator--(int){
    Fixed tmp = *this;
    this->entier--;
    return tmp;
}


/*------------------------------------------------------*/
/*------------           Functions          ------------*/
/*------------------------------------------------------*/

std::ostream& operator<<(std::ostream &output, Fixed const& obj){

    output << obj.toFloat();
    return output; 
}

