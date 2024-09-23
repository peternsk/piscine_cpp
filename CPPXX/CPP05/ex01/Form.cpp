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

#include "Form.hpp"
#include "Bureaucrat.hpp"

/******************************************************************************/
/**** CONSTROCTOR & DESTRUCTOR  ***********************************************/
/******************************************************************************/

Form::Form() : name(""), gradeToSign(0), gradeToExecute(0){
    this->formSigned = false;
    if(name.empty() == 1 || gradeToSign == 0 || gradeToExecute == 0)
        throw Form::CannotInitForm();
}

Form::Form(Form const& cpy) : gradeToSign(cpy.gradeToSign), gradeToExecute(cpy.gradeToExecute){
        *this = cpy;
}

Form::Form(std::string m_name, int m_gradeSign, int m_gradeExecute) : name(m_name), gradeToSign(m_gradeSign), gradeToExecute(m_gradeExecute){
    if(this->name.empty() == 1)
        throw Form::CannotInitForm();
    if(this->gradeToExecute < 1 || this->gradeToSign < 1)
        throw Form::GradeTooHighException();
    if(this->gradeToExecute > 150 || this->gradeToSign > 150)
        throw Form::GradeTooLowException();
    this->formSigned = false;
}

Form::~Form(){}

/******************************************************************************/
/****   OVERLOADING OPERATOR    ***********************************************/
/******************************************************************************/

Form& Form::operator=( const Form& objForm){
    if(this != &objForm){
		const_cast<std::string&>(this->name) = objForm.name;
		const_cast<int&>(this->gradeToSign) = objForm.gradeToSign;
		const_cast<int&>(this->gradeToExecute) = objForm.gradeToExecute;
        this->formSigned = objForm.formSigned;
	}
    return *this;
}


/******************************************************************************/
/****          METHODS          ***********************************************/
/******************************************************************************/

std::string Form::getName() const{
    return this->name;
}

int Form::getGradeToSign() const{
    return this->gradeToSign;
}

int Form::getGradeToExecute() const{
    return this->gradeToExecute;
}

void Form::beSigned(Bureaucrat &Bur){
    if(this->formSigned == true)
        throw Form::FormAlreadySigned();
    else if(Bur.getGrade() > this->gradeToSign){
        Bur.signForm(*this);
        throw Form::GradeTooLowException();
    }
    else if(Bur.getGrade() <= this->gradeToSign){   
        Bur.signForm(*this);
        this->formSigned = true;    
    }
}

bool Form::isFormSign(){
    if(this->formSigned == true)
        return true;
    else
        return false;
}

std::string Form::FormStatus() const{
    if(this->formSigned == true)
        return "Signed";
    else
        return "Not Signed";
}

/******************************************************************************/
/****         FUNCTIONS         ***********************************************/
/******************************************************************************/

std::ostream& operator<<(std::ostream& os, const Form& obj){
    os << "Form: " << obj.getName() << "grade to sign: " << obj.getGradeToSign() << "grade to execute: " << obj.getGradeToExecute() << "status: " << obj.FormStatus();
    return os;
}
