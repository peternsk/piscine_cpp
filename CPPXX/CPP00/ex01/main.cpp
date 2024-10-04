/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:51:17 by peternsaka        #+#    #+#             */
/*   Updated: 2024/10/04 13:37:27 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	PhoneBook book(0);
	std::string command;
	prog_image();
	while(ON && std::cin.good())
	{
		std::cout << "Entre a command : " ;
		std::getline(std::cin, command);
		if(command == "ADD" || command == "SEARCH" || command == "EXIT"){
			if(command == "ADD"){
				book.ADD();
				prog_image();
			}
			else if(command == "SEARCH"){
				book.SEARCH();
				prog_image();
			}
			else if(command == "EXIT"){
				std::cout << "Exiting Phonebook: " << std::endl;
			}
		}
		else{
				std::cout << "Invalid command: " << std::endl;
		}
	}
}
