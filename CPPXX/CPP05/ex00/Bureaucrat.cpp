/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:27:02 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/17 10:51:44 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#include "Bureaucrat.hpp"

/******************************************************************************/
/**** CONSTROCTOR & DESTRUCTOR  ***********************************************/
/******************************************************************************/

Bureaucrat::Bureaucrat() : name(""), grade(0){
	if(name.empty() == 1 || grade == 0)
		throw("Name & Grade are uninitialize");
}

Bureaucrat::Bureaucrat(std::string m_name, int m_grade){

}

Bureaucrat::Bureaucrat(Bureaucrat const& objBur){

}

Bureaucrat::~Bureaucrat(){

}


/******************************************************************************/
/****   OVERLOADING OPERATOR    ***********************************************/
/******************************************************************************/

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& objBur){

}

std::ostream& Bureaucrat::operator<<(std::ostream& os, const Bureaucrat& Bur){

}

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

void 		Bureaucrat::GradeTooHighException(){

}

void 		Bureaucrat::GradeTooLowException(){

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
	std::cout << "| CREATE - INCREASE LVL -  DECREASE LVL - SHOW - HELP |" << std::endl;
	std::cout << std::endl;
}
