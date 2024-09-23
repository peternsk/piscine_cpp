/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:08:43 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/16 12:55:02 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* chien = new Dog();
    const Animal* chat = new Cat();
    
    chien->makeSound();
    chat->makeSound();
    
    delete chien;
    delete chat;
    
    return 0;
}