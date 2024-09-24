/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:59:00 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/23 12:02:56 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/******************************************************************************/
/**** CONSTROCTOR & DESTRUCTOR  ***********************************************/
/******************************************************************************/

PresidentialPardonForm::PresidentialPardonForm(){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& cpy) : AForm(cpy){
}

PresidentialPardonForm::PresidentialPardonForm(std::string m_name, int m_gradeSign, int m_gradeExecute, std::string m_target) 
    : AForm(m_name, m_gradeSign, m_gradeExecute), target(m_target){
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

/******************************************************************************/
/****   OVERLOADING OPERATOR    ***********************************************/
/******************************************************************************/

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm &obj){
    AForm::operator=(obj);
    return *this;
}

/******************************************************************************/
/****          METHODS          ***********************************************/
/******************************************************************************/

std::string PresidentialPardonForm::getTarget(){
    return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    time_t second;
    second = time(NULL);
    
	if(executor.getGrade() <= this->getGradeToExecute() && executor.getGrade() <= this->getGradeToSign())
        std::cout << this->target << " has been forgive by Zaphod Beeblebrox";
	else
		throw PresidentialPardonForm::GradeTooLowException();
}
