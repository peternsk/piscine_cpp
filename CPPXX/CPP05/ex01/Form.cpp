/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:15:06 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/18 21:37:02 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"


/******************************************************************************/
/**** CONSTROCTOR & DESTRUCTOR  ***********************************************/
/******************************************************************************/

Form::Form() : name(""), gradeToSign(0), gradeToExecute(0){
    if(name.empty() == 1 || gradeToSign == 0 || gradeToExecute == 0)
        throw Form::CannotInitForm();
}

Form::Form(Form& const cpy){
    *this = cpy;
}

Form::Form(std::string m_name, int m_gradeSign, int m_gradeExecute) : name(m_name), gradeToSign(m_gradeSign), gradeToExecute(m_gradeExecute){
    if(this->name.empty() == 1)
        throw Form::CannotInitForm();
    if(this->gradeToExecute < 1 || this->gradeToSign < 1)
        throw Form::GradeTooHighException();
    if(this->gradeToExecute > 150 || this->gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form::~Form(){}

/******************************************************************************/
/****   OVERLOADING OPERATOR    ***********************************************/
/******************************************************************************/

Form& Form::operator=( const Form& objForm);



/******************************************************************************/
/****          METHODS          ***********************************************/
/******************************************************************************/


/******************************************************************************/
/****         FUNCTIONS         ***********************************************/
/******************************************************************************/
