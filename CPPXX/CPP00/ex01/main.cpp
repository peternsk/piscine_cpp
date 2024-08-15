/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:51:17 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/15 00:23:02 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	PhoneBook book(0);
	std::string command;
	prog_image();
	while(ON)
	{
		std::cout << "Entre a command : " ;
		std::getline(std::cin, command);
		if(command == "ADD" || command == "SEARCH" || command == "EXIT"){
			if(command == "ADD"){
				book.ADD();
			}
			else if(command == "SEARCH"){
				book.SEARCH();
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
