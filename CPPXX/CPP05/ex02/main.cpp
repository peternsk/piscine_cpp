/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:26:58 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/19 01:50:12 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"


// #define RESET   "\033[0m"
// #define RED     "\033[31m"
// #define GREEN   "\033[32m"
// #define YELLOW  "\033[33m"
// #define BLUE    "\033[34m"

// void printTitle(const std::string& title) {
// 	std::cout << BLUE << "----------------------------------------" << std::endl;
// 	std::cout << GREEN << title << RESET << std::endl;
// 	std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
// }

// int main()
// {
// 	printTitle("Test 1: Init Bureaucrat");
// 	Bureaucrat Leon("Leon", 1);
// 	Bureaucrat Arthur("Arthur", 150);
// 	try{
// 		Bureaucrat Smith("Smith", 151);
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	try{
// 		Bureaucrat Nicole("Nicole", 0);
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	Bureaucrat Jeannine("Jeannine", 42);
// 	printTitle("Test 1: Bureaucrat initiated 3 out of 5 try");
// 	std::cout << std::endl;
// 	std::cout << Leon << std::endl;
// 	std::cout << Arthur << std::endl;
// 	std::cout << Jeannine << std::endl;
// 	printTitle("Test 2: Try to increment/decrement Bureaucrat");
	
// 	try{
// 		Leon.increase();
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	try{
// 		Arthur.decrease();
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	try{
// 		Jeannine.increase();
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << Leon << std::endl;
// 	std::cout << Arthur << std::endl;
// 	std::cout << Jeannine << std::endl;
// 	printTitle("Test 3: Init Form");
// 	Form form("form", 42, 42);
// 	std::cout << form << std::endl;
// 	printTitle("Test 4: Try to sign Form");
// 	try{
// 		Arthur.signForm(form);
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	try{
// 		Leon.signForm(form);
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	try{
// 		Jeannine.signForm(form);
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << form << std::endl;
// 	printTitle("Test 5: Try to sign Form");
// 	Form form2("form2", 1, 42);
// 	std::cout << form2 << std::endl;
// 	try{
// 		Leon.signForm(form2);
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	try{
// 		Arthur.signForm(form2);
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	try{
// 		Jeannine.signForm(form2);
// 	}
// 	catch (std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << form2 << std::endl;

// 	return (0);
// }