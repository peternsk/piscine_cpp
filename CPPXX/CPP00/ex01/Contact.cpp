/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:10:42 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/14 15:03:42 by pnsaka           ###   ########.fr       */
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
		if(this->m_first.size() == 0 || allAlpha(this->m_first ) == false)
			break;
	}
}

void Contact::setLast(){
	
	while(!std::cin.eof())
	{
		std::getline(std::cin, this->m_last);
		if(this->m_last.size() == 0 || allAlpha(this->m_first ) == false)
			break;
	}
}

void Contact::setNick(){
	
	while(!std::cin.eof())
	{
	std::getline(std::cin, this->m_first);
	if(this->m_nick.size() == 0 || allAlpha(this->m_first ) == false)
		break;
	}
}

void Contact::setPhone(){
	
	while(!std::cin.eof())
	{
		std::getline(std::cin, this->m_phone);
		if(this->m_phone.size() == 0 || allNum(this->m_first ) == false)
			break;
	}
}

void Contact::setSecret(){
	
	while(!std::cin.eof())
	{
		std::getline(std::cin, this->m_secret);
		if(this->m_secret.size() == 0)
			break;
		std::cout << "contact added ! please press \" ENTER \" " << std::endl;
	}
}
