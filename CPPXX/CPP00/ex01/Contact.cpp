/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:10:42 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/15 08:56:03 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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

	while(!std::cin.eof())
	{
		std::getline(std::cin, this->m_first);
		if(this->m_first.size() == 0 || allAlpha(this->m_first ) == false){
			std::cout << "EMPTY FIRST" << std::endl;
			break;
		}
	}
}

void Contact::setLast(){

	while(!std::cin.eof())
	{
		std::getline(std::cin, this->m_last);
		if(this->m_last.size() == 0 || allAlpha(this->m_first ) == false){
			std::cout << "EMPTY LAST" << std::endl;
			break;
		}
	}
}

void Contact::setNick(){

	while(!std::cin.eof())
	{
	std::getline(std::cin, this->m_first);
	if(this->m_nick.size() == 0 || allAlpha(this->m_first ) == false)
		std::cout << "EMPTY NICK" << std::endl;
		break;
	}
}

void Contact::setPhone(){

	while(!std::cin.eof())
	{
		std::getline(std::cin, this->m_phone);
		if(this->m_phone.size() == 0 || allNum(this->m_first ) == false){
			std::cout << "EMPTY PHONE" << std::endl;
			break;
		}
	}
}

void Contact::setSecret(){

	while(!std::cin.eof())
	{
		std::getline(std::cin, this->m_secret);
		if(this->m_secret.size() == 0){
			std::cout << "EMPTY SECRECT" << std::endl;
			break;
		}
		std::cout << "contact added ! please press \" ENTER \" " << std::endl;
	}
}

void Contact::setIndex(int size){
	m_index = size;
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
