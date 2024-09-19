/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:27:02 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/19 01:17:50 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>
#include <string>


/******************************************************************************/
/**** CONSTROCTOR & DESTRUCTOR  ***********************************************/
/******************************************************************************/

Bureaucrat::Bureaucrat() : name(""), grade(0){
	if(name.empty() == 1 || grade == 0)
		throw Bureaucrat::UnableToInit();
}

Bureaucrat::Bureaucrat(std::string m_name, int m_grade) : name(m_name), grade(m_grade){
	if(this->grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if(this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& objBur){
	*this = objBur;
}

Bureaucrat::~Bureaucrat(){
}


/******************************************************************************/
/****   OVERLOADING OPERATOR    ***********************************************/
/******************************************************************************/

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& objBur){
	if(this->grade != objBur.grade){
		grade = objBur.grade;
	}
	return *this;
}


/******************************************************************************/
/****          METHODS          ***********************************************/
/******************************************************************************/

void        Bureaucrat::setGrade(int m_grade){
	this->grade = m_grade;
	if(this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName() const{
	return this->name;
}

int         Bureaucrat::getGrade() const{
	return this->grade;
}

void        Bureaucrat::increase(){
	this->grade--;
	if(this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void        Bureaucrat::decrease(){
	this->grade++;
	if(this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void		Bureaucrat::signForm(Form &form){
	if(form.isFormSign() == true)
		std::cout << this->getName() << "signed" << form.getName() << std::endl;
	else
		std::cout << this->getName() << "couldn't sign" << form.getName() << "because his grade is too low" <<  std::endl;
}


/******************************************************************************/
/****         FUNCTIONS         ***********************************************/
/******************************************************************************/

void printBanner(){
	std::cout << std::endl;
	std::cout << "▗▄▄▖ ▗▖ ▗▖▗▄▄▖ ▗▄▄▄▖ ▗▄▖ ▗▖ ▗▖ ▗▄▄▖▗▄▄▖  ▗▄▖▗▄▄▄▖▗▄▄▄▖  " << std::endl;
	std::cout << "▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▌   ▐▌ ▐▌▐▌ ▐▌▐▌   ▐▌ ▐▌▐▌ ▐▌ █  ▐▌     " << std::endl;
	std::cout << "▐▛▀▚▖▐▌ ▐▌▐▛▀▚▖▐▛▀▀▘▐▛▀▜▌▐▌ ▐▌▐▌   ▐▛▀▚▖▐▛▀▜▌ █  ▐▛▀▀▘  " << std::endl;
	std::cout << "▐▙▄▞▘▝▚▄▞▘▐▌ ▐▌▐▙▄▄▖▐▌ ▐▌▝▚▄▞▘▝▚▄▄▖▐▌ ▐▌▐▌ ▐▌ █  ▐▙▄▄▖  " << std::endl;
	std::cout << std::endl;
	std::cout << "      | WELCOME TO THE BUREAUCRATIC NIGHTMARE |" << std::endl;
	std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bur){
	os << Bur.getName() << ", bureaucrat grade " << Bur.getGrade();
	return os;
}