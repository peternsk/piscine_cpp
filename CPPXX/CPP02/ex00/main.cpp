/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:06:29 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/09 12:07:56 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    
    c = b;
    
    std::cout << a.getRawBits() << std::endl; std::cout << b.getRawBits() << std::endl; std::cout << c.getRawBits() << std::endl;
    
    return 0; 
}