/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:04:11 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/23 11:57:27 by pnsaka           ###   ########.fr       */
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
        ShrubberyCreationForm(std::string m_name, int m_gradeSign, int m_gradeExecute, std::string m_target);

        ~ShrubberyCreationForm();

        ShrubberyCreationForm& operator=( const ShrubberyCreationForm &obj);

        void execute(Bureaucrat const & executor) const;
        std::string getTarget();

    private:
        std::string const target;
};
