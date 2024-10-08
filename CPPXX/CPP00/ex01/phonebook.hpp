#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"
#include <iomanip>

/*====================================================*/
/*=                      DEFINE                      =*/
/*====================================================*/

#define ON 1

/*====================================================*/
/*=                      CLASSES                     =*/
/*====================================================*/

class PhoneBook {
	public:
		PhoneBook();
		PhoneBook(int size);

		void ADD();
		void EXIT();
		void SEARCH();

		void printContactList();
		void showContact(int index);
		std::string croped(std::string str);
	private:
		Contact list[8];
		int m_size;
};

void	prog_image();

#endif
