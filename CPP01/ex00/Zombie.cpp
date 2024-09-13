/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 08:19:55 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/21 09:38:33 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(std::string name) : m_name(name){
}

Zombie::~Zombie(){
}

void Zombie::annonce(){
   std::cout << Zombie::m_name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

 