/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:38:58 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/13 14:47:50 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	prog_image(){

	std::cout << "██████  ██   ██  ██████  ███    ██ ███████ ██████   ██████   ██████  ██   ██" << std::endl;
	std::cout << "██   ██ ██   ██ ██    ██ ████   ██ ██      ██   ██ ██    ██ ██    ██ ██  ██" << std::endl;
	std::cout << "██████  ███████ ██    ██ ██ ██  ██ █████   ██████  ██    ██ ██    ██ █████" << std::endl;
	std::cout << "██      ██   ██ ██    ██ ██  ██ ██ ██      ██   ██ ██    ██ ██    ██ ██  ██" << std::endl;
	std::cout << "██      ██   ██  ██████  ██   ████ ███████ ██████   ██████   ██████  ██   ██" << std::endl;
	std::cout << std::endl;
	std::cout << "			| ADD |  | SEARCH |  | EXIT |" <<  std::endl;
	std::cout << std::endl;

}

PhoneBook::PhoneBook(){
}

void PhoneBook::ADD(){
	std::cout << "Adding contact in phonebook " << std::endl;
}

void PhoneBook::EXIT(){
	std::cout << "exiting phonebook " << std::endl;
}

void PhoneBook::SEARCH(){
	std::cout << "Searching contact in phonebook " << std::endl;
}
