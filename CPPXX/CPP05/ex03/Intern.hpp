/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:01:10 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/23 23:45:33 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_INTERN_HPP
#define DEF_INTERN_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    public:
        Intern();
        Intern(Intern const &cpy);
    
        ~Intern();
        
        Intern& operator=(const Intern &obj);
        
        AForm* makeForm(std::string formName, std::string _target);
        int Intern::retPos(std::string _target, std::string _targetArr[3]);

        
        
        class NoneExistingForm : public std::exception {
            public:
                virtual const char* what() const throw(){
                    return  "ERROR : none existant form";
                }
        };
};

#endif