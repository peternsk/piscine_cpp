#pragma once
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

}
