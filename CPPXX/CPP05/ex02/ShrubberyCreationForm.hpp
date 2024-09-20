/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:04:11 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/20 13:39:55 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include <string>
#include <stdbool.h>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const& cpy);
        ShrubberyCreationForm(std::string m_name, int m_gradeSign, int m_gradeExecute);

        ~ShrubberyCreationForm();

        ShrubberyCreationForm& operator=( const ShrubberyCreationForm &obj);
        
        void execute(Bureaucrat const & executor);
        
    private:
};