#pragma once
#include <iostream>
#include <string>
#include <stdbool.h>
#include "Bureaucrat.hpp"


class Form {
    public:
        Form();
        Form(const Form& cpy);
        Form(std::string m_name, int m_gradeSign, int m_gradeExecute);

        Form& operator=( const Form& objForm);
        
        ~Form();

        std::string getName() const;
        std::string getGradeToSign() const;
        std::string getGradeToExecute() const;
        
        void beSigned(Bureaucrat &Bur);
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

    private:
        std::string const name;
        bool    formSigned;
        int     const gradeToSign;
        int     const gradeToExecute;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);