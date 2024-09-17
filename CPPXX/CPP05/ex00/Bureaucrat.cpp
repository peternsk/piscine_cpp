/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:27:02 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/17 14:00:56 by pnsaka           ###   ########.fr       */
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

}

Bureaucrat::~Bureaucrat(){

}


/******************************************************************************/
/****   OVERLOADING OPERATOR    ***********************************************/
/******************************************************************************/

// Bureaucrat& Bureaucrat::operator=(const Bureaucrat& objBur){

// }

// std::ostream& Bureaucrat::operator<<(std::ostream& os, const Bureaucrat& Bur){

// }

/******************************************************************************/
/****          METHODS          ***********************************************/
/******************************************************************************/

void        Bureaucrat::setGrade(){

}

std::string Bureaucrat::getName(){

}

int         Bureaucrat::getGrade(){

}

void        Bureaucrat::increase(){

}

void        Bureaucrat::decrease(){

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
