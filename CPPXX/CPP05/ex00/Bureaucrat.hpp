#pragma once
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
    public:
        Bureaucrat();
        Bureaucrat(std::string m_name, int m_grade);
        Bureaucrat(Bureaucrat const& objBur);
        ~Bureaucrat();


        Bureaucrat& operator=(const Bureaucrat& objBur);

        std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bur);

        void        setGrade(int m_grade);
        std::string getName() const;
        int         getGrade() const;
        void        increase();
        void        decrease();

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

        class UnableToInit : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "ERROR : Cannot init this bureaucrat...";
                }
        };

    private:
        std::string const name;
        int         grade;
};

void	printBanner();
