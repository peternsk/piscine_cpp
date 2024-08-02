/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:01:53 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/02 14:59:54 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Duree.hpp"
#include <string>
#include <iostream>

int main(void)
{
    Duree duree1(0, 1000, 2);
    Duree duree2(0, 15, 2);
    Duree res;

    if(duree1 > duree2)
        std::cout << "duree 1 plus grand" << std::endl;
    else 
        std::cout << "duree 1 n'est pas plus grand" << std::endl;
    
	return(0);
}
