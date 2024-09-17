/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:26:58 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/17 14:01:11 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#include "Bureaucrat.hpp"
#include <exception>


int main(void){
	printBanner();

	/***********************************/
	/****       INIT OBJECT         ****/
	/***********************************/

	try{
		// Bureaucrat *test1 = new Bureaucrat();
		Bureaucrat *test2 = new Bureaucrat("Neo", -1);
		// Bureaucrat *test3 = new Bureaucrat("Smith", 199);
	}
	catch(Bureaucrat::UnableToInit & err){
		std::cerr << err.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException & err){
		std::cerr << err.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & err){
		std::cerr << err.what() << std::endl;
	}
}
