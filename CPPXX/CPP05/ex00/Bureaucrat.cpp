/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:27:02 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/17 20:45:21 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#include "Bureaucrat.hpp"
#include <exception>


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
	this->name = objBur.getName();
	this->setGrade(objBur.grade);
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

std::ostream& Bureaucrat::operator<<(std::ostream& os, const Bureaucrat& Bur){
	os << Bur.getName() << " bureaucrat grade " << Bur.getGrade() <<
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
