/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:06:29 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/10 15:03:13 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main( void )
{
    Fixed i(5), j;

    std::cout << i.getRawBits() << ", " << j.toInt() << std::endl;
    
    j = ++i;
    
    std::cout << i.toInt() << ", " << j.toInt() << std::endl;
    
    return 0; 
}