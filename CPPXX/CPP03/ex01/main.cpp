/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:15:28 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/11 20:17:20 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap Player("ironman");

    std::cout << "player hit point " << Player.getEnergyPoint() << std::endl;
    Player.attack("kirikou");
    Player.beRepaired(10);
    std::cout << "player hit point " << Player.getEnergyPoint() << std::endl;
    Player.guardGate();
    
    return 0;
}