/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:10:42 by peternsaka        #+#    #+#             */
/*   Updated: 2024/10/04 13:35:47 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "phonebook.hpp"


Contact::Contact(){}

Contact::Contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
	: m_first(first), m_last(last), m_nick(nick), m_phone(phone), m_secret(secret) {}

bool allAlpha(std::string s){
	for(int i = 0; i <= s.size(); i++){
		if(isalpha(s[i]) == 0)
			return false;
	}
	return true;
}

bool allNum(std::string s){
	for(int i = 0; i <= s.size(); i++){
		if(s[i] <= '0' || s[i] >= '9')
			return false;
	}
	return true;
}


void Contact::setFirst(){

	bool flag = true;
	
	while(!std::cin.eof() && flag == true)
	{
		std::cout << "Enter contact first name : " << std::endl;
		std::getline(std::cin, this->m_first);
		if(this->m_first.empty() == false || allAlpha(this->m_first ) != false){
			flag = false;
			system("clear");
			prog_image();
			return;
		}
		std::cout << "invalid entry...try again..." << std::endl;
	}
}

void Contact::setLast(){
	
	bool flag = true;

	while(!std::cin.eof() && flag == true)
	{
		std::cout << "Enter contact last name : " << std::endl;
		std::getline(std::cin, this->m_last);
		if(this->m_last.empty() == false || allAlpha(this->m_last ) != false){
			flag = false;
			system("clear");
			prog_image();
			break;
		}
		std::cout << "invalid entry...try again..." << std::endl;
	}
}

void Contact::setNick(){

	bool flag = true;

	while(!std::cin.eof() && flag == true)
	{
		std::cout << "Enter contact nick name : " << std::endl;
		std::getline(std::cin, this->m_nick);
		if(this->m_nick.empty() == false || allAlpha(this->m_nick ) != false){
			flag = false;
			system("clear");
			prog_image();
			break;
		}
		std::cout << "invalid entry...try again..." << std::endl;
	}
}

void Contact::setPhone(){

	bool flag = true;

	while(!std::cin.eof() && flag == true)
	{
		std::cout << "Enter contact phone number : " << std::endl;
		std::getline(std::cin, this->m_phone);
		if(this->m_phone.empty() != true || allNum(this->m_first ) != false){
			flag = false;
			system("clear");
			prog_image();
			break;
		}
		std::cout << "invalid entry...try again..." << std::endl;

	}
}

void Contact::setSecret(){

	bool flag = true;

	while(!std::cin.eof() && flag == true)
	{
		std::cout << "Enter contact darkest secret : " << std::endl;
		std::getline(std::cin, this->m_secret);
		if(this->m_secret.empty() != true){
			flag = false;
			system("clear");
			prog_image();
			break;
		}
		std::cout << "invalid entry...try again..." << std::endl;
		
	}
}

void Contact::setIndex(int size){
	this->m_index = size;
}

std::string Contact::getFirst(){
	return this->m_first;
}

std::string Contact::getLast(){
	return this->m_last;
}

std::string Contact::getNick(){
	return this->m_nick;
}

int Contact::getIndex(){
	return this->m_index;
}

std::string Contact::getPhone(){
	return this->m_phone;
}

std::string Contact::getSecret(){
	return this->m_secret;
}
