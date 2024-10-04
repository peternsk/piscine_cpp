/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 08:19:47 by pnsaka            #+#    #+#             */
/*   Updated: 2024/10/04 14:20:00 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"



int main(void)
{
    Zombie Peter("Peter");
    Peter.annonce();
    Zombie *Zazou = newZombie("Zazou");
    Zazou->annonce();
    randomChump("Maggie");

    return 0;
}