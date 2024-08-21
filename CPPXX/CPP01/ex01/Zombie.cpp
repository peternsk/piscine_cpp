/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:48:44 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/21 10:29:53 by pnsaka           ###   ########.fr       */
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

Zombie*    zombieHorde( int N, std::string name ){
    Zombie *horde  = new Zombie[N];
    
    for(int i = 0; i < N; i++){
        horde[i].    
    }
}
