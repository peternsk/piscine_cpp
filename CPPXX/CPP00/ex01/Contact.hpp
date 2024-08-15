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

		void 		setFirst();
		void 		setLast();
		void 		setNick();
		void 		setPhone();
		void 		setSecret();
		void 		setIndex(int size);

		int			getIndex();
		std::string getFirst();
		std::string getLast();
		std::string getNick();
		std::string getPhone();
		std::string getSecret();

	private:
		int m_index;
		std::string m_first;
		std::string m_last;
		std::string m_nick;
		std::string m_phone;
		std::string m_secret;
};

bool allAlpha(std::string s);
bool allNum(std::string s);

#endif
