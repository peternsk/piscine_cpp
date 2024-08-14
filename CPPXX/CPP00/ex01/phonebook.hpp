#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

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
		void ADD();
		void EXIT();
		void SEARCH();
	private:
		// Contact list[8];
};

void	prog_image();

#endif
