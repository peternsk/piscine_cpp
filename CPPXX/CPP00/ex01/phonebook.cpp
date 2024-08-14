/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:38:58 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/14 14:39:46 by pnsaka           ###   ########.fr       */
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

PhoneBook::PhoneBook(int size) : m_size(size) {
}

void PhoneBook::ADD(){
	std::cout << "Adding contact in phonebook " << std::endl;
	
	std::cout << "Enter contact first name : ";
	PhoneBook::list[m_size].setFirst();
	std::cout << std::endl;
	std::cout << "Enter contact last name : ";
	PhoneBook::list[m_size].setLast();
	std::cout << std::endl;
	std::cout << "Enter contact nick name : ";
	PhoneBook::list[m_size].setNick();
	std::cout << std::endl;
	std::cout << "Enter contact phone number : ";
	PhoneBook::list[m_size].setPhone();
	std::cout << std::endl;
	std::cout << "Enter contact darkest secret : ";
	PhoneBook::list[m_size].setSecret();
	std::cout << std::endl;

}

void PhoneBook::EXIT(){
	std::cout << "exiting phonebook " << std::endl;
}

void PhoneBook::SEARCH(){
	std::cout << "Searching contact in phonebook " << std::endl;
}
