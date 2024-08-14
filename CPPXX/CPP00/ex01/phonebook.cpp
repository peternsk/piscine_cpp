/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:38:58 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/14 15:20:10 by pnsaka           ###   ########.fr       */
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
	
	if(PhoneBook::m_size > 7)
		PhoneBook::m_size = 0;
	
	std::cout << "Enter contact first name : " << std::endl;
	PhoneBook::list[m_size].setFirst();
	std::cout << "Enter contact last name : " << std::endl;
	PhoneBook::list[m_size].setLast();
	std::cout << "Enter contact nick name : " << std::endl;
	PhoneBook::list[m_size].setNick();
	std::cout << "Enter contact phone number : " << std::endl;
	PhoneBook::list[m_size].setPhone();
	std::cout << "Enter contact darkest secret : " << std::endl;
	PhoneBook::list[m_size].setSecret();
	PhoneBook::m_size += 1;
}

void PhoneBook::SEARCH(){
	std::cout << "Searching contact in phonebook " << std::endl;
	
	std::cout << " ------------ ------------ ------------ ------------ "<< std::endl;
	std::cout << "|   INDEX    | FIRST NAME | LAST NAME  | NICK NAME  | "<< std::endl;
	std::cout << " ------------ ------------ ------------ ------------ "<< std::endl;

	for(int i = 0; i <= m_size; i++){
		std::cout << "|   INDEX    | FIRST NAME | LAST NAME  | NICK NAME  | "<< std::endl;
		std::cout << " ------------ ------------ ------------ ------------ "<< std::endl;
	}
}

void PhoneBook::EXIT(){
	std::cout << "exiting phonebook " << std::endl;
}