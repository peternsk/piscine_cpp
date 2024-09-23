/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:26:58 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/18 13:45:49 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#include "Bureaucrat.hpp"
#include <exception>


int main(void){
	printBanner();


	try{
		// Bureaucrat *Default = new Bureaucrat();
		Bureaucrat *Neo = new Bureaucrat("Neo", 1);
		// Bureaucrat *Smith = new Bureaucrat("Smith", 199);
		// Bureaucrat *Trinity = new Bureaucrat("Trinity", -1);

		std::cout << *Neo << std::endl;
		Neo->decrease();
		std::cout << *Neo << std::endl;
		Neo->increase();
		std::cout << *Neo << std::endl;
		Neo->increase();
		std::cout << *Neo << std::endl;

		delete Neo;
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
