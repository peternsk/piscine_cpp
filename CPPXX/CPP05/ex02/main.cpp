/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:26:58 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/21 22:30:50 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void){
	printBanner();

	/***********************************/
	/****       INIT OBJECT         ****/
	/***********************************/

	try{
		Bureaucrat Johnny("Johnny", 1);
		ShrubberyCreationForm tree("Tree_Form", 3, 3);

		std::cout << Johnny << std::endl;
		tree.execute(Johnny);
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
