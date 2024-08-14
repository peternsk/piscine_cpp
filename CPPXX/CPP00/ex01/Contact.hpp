#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
/*====================================================*/
/*=                      CLASSES                     =*/
/*====================================================*/

class Contact {
	public:
		Contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret);

	private:
		std::string m_first;
		std::string m_last;
		std::string m_nick;
		std::string m_phone;
		std::string m_secret;
		// int index;
};

void	prog_image();

#endif
