/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:21:22 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/21 15:43:02 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main(void)
{
    /*====================================================*/
    /*=                     INIT VAR                     =*/
    /*====================================================*/
    std::string var = "HI THIS IS BRAIN";
    std::string* stringPTR = &var;
    std::string& stringREF = var;
    
    /*====================================================*/
    /*=                     ADRESSES                     =*/
    /*====================================================*/

    std::cout << "Adresse de var : "<< &var << std::endl;
    std::cout << "Adresse de stringPTR : "<< stringPTR << std::endl;
    std::cout << "Adresse de stringREF : "<< &stringREF << std::endl;
    std::cout << std::endl;

    /*====================================================*/
    /*=                     VALEUR                       =*/
    /*====================================================*/

    std::cout << "Valeur de var : "<< var << std::endl;
    std::cout << "Valeur de stringPTR : "<< *stringPTR << std::endl;
    std::cout << "Valeur de stringREF : "<< stringREF << std::endl;

    return(0);
}