/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:15:28 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/11 21:07:52 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap Player("ironman");

    std::cout << "player hit point " << Player.getEnergyPoint() << std::endl;
    Player.attack("kirikou");
    Player.beRepaired(10);
    std::cout << "player hit point " << Player.getEnergyPoint() << std::endl;
    Player.highFivesGuys();
    
    return 0;
}