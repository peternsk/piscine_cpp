/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randoChump.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 08:42:57 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/21 09:23:56 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name){
       Zombie *newZombie  = new Zombie(name);
       newZombie->annonce();
}