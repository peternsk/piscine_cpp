/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 08:33:18 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/23 13:23:38 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::string lvl;
    
    printBanner();
    std::cout << "Enter your complain level : " ;
    std::cin >> lvl;
    
    if(lvl == "DEBUG" || lvl == "INFO" || lvl == "WARNING" || lvl == "ERROR" ){
        harl.complain(lvl);
    }
    else {
        std::cout << "INVALID COMPLAIN LEVEL..." << std::endl;
    }
    return 0;    
}