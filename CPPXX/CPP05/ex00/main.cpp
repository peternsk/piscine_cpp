/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:26:58 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/17 10:16:20 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#include "Bureaucrat.hpp"

int main(void){
	printBanner();

	try{
		Bureaucrat *test = new Bureaucrat();
	}
	catch(std::string const& err){
		std::cerr << err << std::endl;
	}
}
