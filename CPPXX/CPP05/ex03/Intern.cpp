/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:43:48 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/23 23:43:27 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


/******************************************************************************/
/**** CONSTROCTOR & DESTRUCTOR  ***********************************************/
/******************************************************************************/

Intern::Intern(){
}

Intern::Intern(Intern const &cpy){
    *this = cpy;
}

Intern::~Intern(){
}

/******************************************************************************/
/****   OVERLOADING OPERATOR    ***********************************************/
/******************************************************************************/

Intern& Intern::operator=(Intern const &obj){
    if(this != &obj)
       *this = obj;
    return *this; 
}

/******************************************************************************/
/****          METHODS          ***********************************************/
/******************************************************************************/

int Intern::retPos(std::string _target, std::string _targetArr[3]){
    for(int i = 0; i < 3; i++){
        if(_target == _targetArr[i]){
            return i;
        }
    }
    return 0;
}

AForm* Intern::makeForm(std::string formName, std::string _target){
    std::string formName[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; i++)
    {
        if(_target == formName.[i])
            
    }
    
}