#pragma once
#include <iostream>
#include <string>
#include <stdbool.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    public:
        AForm();
        AForm(AForm const& cpy);
        AForm(std::string m_name, int m_gradeSign, int m_gradeExecute);

        AForm& operator=( const AForm& objForm);
        
        ~AForm();

        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        
        void beSigned(Bureaucrat &Bur);
        bool isFormSign();
        std::string FormStatus() const;

        virtual void execute(Bureaucrat const & executor)const = 0; //virtual pure
        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "ERROR : Grade too high";
                }
        };

        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "ERROR : Grade too low";
                }
        };
        
         class CannotInitForm : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "ERROR : Attribute aren't initialize proprely...";
                }
        };

         class FormAlreadySigned : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "ERROR : AForm is already sighred";
                }
        };

    private:
        std::string const name;
        bool    formSigned;
        int     const gradeToSign;
        int     const gradeToExecute;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);