#pragma once
#include <iostream>
#include <string>

class Bureaucrat {
    public:
        Bureaucrat();
        Bureaucrat(std::string m_name, int m_grade);
        Bureaucrat(Bureaucrat const& objBur);
        ~Bureaucrat();


        Bureaucrat& operator=(const Bureaucrat& objBur);
        std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bur);

        void        setGrade();
        std::string getName();
        int         getGrade();
        void        increase();
        void        decrease();

		void 		GradeTooHighException();
		void 		GradeTooLowException();
    private:
        std::string const name;
        int         grade;
};

void	printBanner();
