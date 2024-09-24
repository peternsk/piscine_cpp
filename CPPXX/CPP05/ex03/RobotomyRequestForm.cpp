/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:00:46 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/23 12:02:17 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/******************************************************************************/
/**** CONSTROCTOR & DESTRUCTOR  ***********************************************/
/******************************************************************************/

RobotomyRequestForm::RobotomyRequestForm(){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& cpy) : AForm(cpy){
}

RobotomyRequestForm::RobotomyRequestForm(std::string m_name, int m_gradeSign, int m_gradeExecute, std::string m_target)
    : AForm(m_name, m_gradeSign, m_gradeExecute), target(m_target){
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

/******************************************************************************/
/****   OVERLOADING OPERATOR    ***********************************************/
/******************************************************************************/

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm &obj){
    AForm::operator=(obj);
    return *this;
}

/******************************************************************************/
/****          METHODS          ***********************************************/
/******************************************************************************/

std::string RobotomyRequestForm::getTarget(){
    return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    time_t second;
    second = time(NULL);
    
	if(executor.getGrade() <= this->getGradeToExecute() && executor.getGrade() <= this->getGradeToSign())
	{
        std::cout << "Zzzzzzzztttttt Zzzzzzzzzzzttt" << std::endl;
        if((second % 2) == 0)
            std::cout << this->target << " have been succefully Robotomized" << std::endl; 
        else
            std::cout << this->target << " failed Robotomization" << std::endl;
	}
	else
		throw RobotomyRequestForm::GradeTooLowException();
}