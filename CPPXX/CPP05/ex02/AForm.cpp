 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:15:06 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/18 22:49:03 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/******************************************************************************/
/**** CONSTROCTOR & DESTRUCTOR  ***********************************************/
/******************************************************************************/

AForm::AForm() : name(""), gradeToSign(0), gradeToExecute(0){
    this->formSigned = false;
    if(name.empty() == 1 || gradeToSign == 0 || gradeToExecute == 0)
        throw AForm::CannotInitForm();
}

AForm::AForm(AForm const& cpy) : gradeToSign(cpy.gradeToSign), gradeToExecute(cpy.gradeToExecute){
        *this = cpy;
}

AForm::AForm(std::string m_name, int m_gradeSign, int m_gradeExecute) : name(m_name), gradeToSign(m_gradeSign), gradeToExecute(m_gradeExecute){
    if(this->name.empty() == 1)
        throw AForm::CannotInitForm();
    if(this->gradeToExecute < 1 || this->gradeToSign < 1)
        throw AForm::GradeTooHighException();
    if(this->gradeToExecute > 150 || this->gradeToSign > 150)
        throw AForm::GradeTooLowException();
    this->formSigned = false;
}

AForm::~AForm(){}

/******************************************************************************/
/****   OVERLOADING OPERATOR    ***********************************************/
/******************************************************************************/

AForm& AForm::operator=( const AForm& objAForm){
    if(this != &objAForm){
		const_cast<std::string&>(this->name) = objAForm.name;
		const_cast<int&>(this->gradeToSign) = objAForm.gradeToSign;
		const_cast<int&>(this->gradeToExecute) = objAForm.gradeToExecute;
        this->formSigned = objAForm.formSigned;
	}
    return *this;
}


/******************************************************************************/
/****          METHODS          ***********************************************/
/******************************************************************************/

std::string AForm::getName() const{
    return this->name;
}

int AForm::getGradeToSign() const{
    return this->gradeToSign;
}

int AForm::getGradeToExecute() const{
    return this->gradeToExecute;
}

void AForm::beSigned(Bureaucrat &Bur){
    if(this->formSigned == true)
        throw AForm::FormAlreadySigned();
    else if(Bur.getGrade() > this->gradeToSign){
        Bur.signForm(*this);
        throw AForm::GradeTooLowException();
    }
    else if(Bur.getGrade() <= this->gradeToSign){   
        Bur.signForm(*this);
        this->formSigned = true;    
    }
}

bool AForm::isFormSign(){
    if(this->formSigned == true)
        return true;
    else
        return false;
}

std::string AForm::FormStatus() const{
    if(this->formSigned == true)
        return "Signed";
    else
        return "Not Signed";
}

/******************************************************************************/
/****         FUNCTIONS         ***********************************************/
/******************************************************************************/

std::ostream& operator<<(std::ostream& os, const AForm& obj){
    os << "Form: " << obj.getName() << "grade to sign: " << obj.getGradeToSign() << "grade to execute: " << obj.getGradeToExecute() << "status: " << obj.FormStatus();
    return os;
}
