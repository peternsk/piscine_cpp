#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>
/*====================================================*/
/*=                      CLASSES                     =*/
/*====================================================*/

class Contact {
	public:
		Contact();
		Contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret);
		void setFirst();
		void setLast();
		void setNick();
		void setPhone();
		void setSecret();

	private:
		std::string m_first;
		std::string m_last;
		std::string m_nick;
		std::string m_phone;
		std::string m_secret;
		int index;
};

bool allAlpha(std::string s);
bool allNum(std::string s);

#endif
