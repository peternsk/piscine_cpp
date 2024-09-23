
#include <iostream>
#include <string>
#include <stdbool.h>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"


/******************************************************************************/
/**** CONSTROCTOR & DESTRUCTOR  ***********************************************/
/******************************************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpy) : AForm(cpy){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string m_name, int m_gradeSign, int m_gradeExecute) : AForm(m_name, m_gradeSign, m_gradeExecute){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

/******************************************************************************/
/****   OVERLOADING OPERATOR    ***********************************************/
/******************************************************************************/

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &obj){
    AForm::operator=(obj);
    return *this;
}

/******************************************************************************/
/****          METHODS          ***********************************************/
/******************************************************************************/


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if(executor.getGrade() <= this->getGradeToExecute())
	{
		std::ofstream _File( this->getName() + "_shrubbery");
		_File << "               ,@@@@@@@, " << std::endl;
		_File << "       ,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl;
		_File << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl;
		_File << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88' " << std::endl;
		_File << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888' " << std::endl;
		_File << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl;
		_File << "   `&%\\ ` /%&'    |.|        \\ '|8' " << std::endl;
		_File << "       |o|        | |         | | " << std::endl;
		_File << "       |.|        | |         | | " << std::endl;
		_File << "jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ " << std::endl;
		_File.close();
	}
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}
