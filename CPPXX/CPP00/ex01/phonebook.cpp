/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:38:58 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/15 20:23:30 by pnsaka           ###   ########.fr       */
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

	if(PhoneBook::m_size > 8)
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
	PhoneBook::list[m_size].setIndex(m_size);
	PhoneBook::m_size += 1;
}

void PhoneBook::printContactList(){
	std::cout << " ---------- ---------- ---------- ---------- "<< std::endl;
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICK NAME | "<< std::endl;
	std::cout << " ---------- ---------- ---------- ---------- "<< std::endl;

	for(int i = 0; i < 8; i++){
		std::cout << "|" << std::setw(10) << std::setiosflags(std::ios::left) << i << "|" << 
		std::setw(10) << std::setiosflags(std::ios::left) << PhoneBook::list[i].getFirst() << "|" << 
		std::setw(10) << std::setiosflags(std::ios::left) << PhoneBook::list[i].getLast() << "|" <<
		std::setw(10) << std::setiosflags(std::ios::left) << PhoneBook::list[i].getNick() << "|" << std::endl;
		std::cout << " ---------- ---------- ---------- ---------- "<< std::endl;
	}
}

void PhoneBook::showContact(int index){
		std::cout << PhoneBook::list[index].getFirst() << std::endl;
		std::cout << PhoneBook::list[index].getLast() << std::endl;
		std::cout << PhoneBook::list[index].getNick() << std::endl;
		std::cout << PhoneBook::list[index].getPhone() << std::endl;
		std::cout << PhoneBook::list[index].getSecret() << std::endl;
}


void PhoneBook::SEARCH(){
	std::string index;
	int rIndex;

	PhoneBook::printContactList();
	std::cout << " enter the index of the contact to be displayed" << std::endl;
	std::getline(std::cin, index);
	rIndex = std::atoi(index.c_str());
	if((rIndex >= 1 && rIndex <= 8) && (rIndex > 0 && rIndex <= m_size)){ 
		PhoneBook::showContact(rIndex);
	}
	else{
		std::cout << "Index don't match with any contact..." << std::endl;
	}
}

void PhoneBook::EXIT(){
	std::cout << "exiting phonebook " << std::endl;
}
