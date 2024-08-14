/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:51:17 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/14 12:06:44 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	std::string command;
	prog_image();
	while(ON)
	{
		std::cout << "Entre a command : " ;
		std::cin >> command;
		if(command == "ADD" || command == "SEARCH" || command == "EXIT"){
			if(command == "ADD"){
				std::cout << "Adding contact: " << std::endl;
			}
			if(command == "SEARCH"){
				std::cout << "Searching contact: " << std::endl;
			}
			if(command == "EXIT"){
				std::cout << "Exiting Phonebook: " << std::endl;
			}
		}
		else{
				std::cout << "Invalid command: " << std::endl;
		}
	}
}
