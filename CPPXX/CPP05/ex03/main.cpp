/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:26:58 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/23 12:40:21 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	printBanner();

	/***********************************/
	/****       INIT OBJECT         ****/
	/***********************************/

	try{
		Bureaucrat Johnny("Johnny", 1);
		ShrubberyCreationForm tree("Tree_Form", 3, 3, "arbre");
		RobotomyRequestForm robot("roboto", 3, 3, "bipbip");
		PresidentialPardonForm prez("pardon", 3, 3, "Bush");

		std::cout << Johnny << std::endl;
		tree.execute(Johnny);
		robot.execute(Johnny);
		prez.execute(Johnny);
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
	catch(AForm::GradeTooHighException & err){
		std::cerr << err.what() << std::endl;
	}
	catch(AForm::GradeTooLowException & err){
		std::cerr << err.what() << std::endl;
	}
}
