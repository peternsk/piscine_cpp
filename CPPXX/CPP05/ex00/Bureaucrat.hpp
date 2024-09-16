#pragma once

#include <iostream>
#include <string>

class Bureaucrat {
    public:
        Bureaucrat();
        Bureaucrat(std::string m_name, int m_grade);
        Bureaucrat(Bureaucrat& const objBur);
        ~Bureaucrat();

        std::string getName();
        int         getGrade();
        void        increase();
        void        decrease();

        Bureaucrat& operator=(const Bureaucrat& objBur);
        std::ostream operator<<(const Bureaucrat& Bur);
        
        void        setGrade
    private:
        std::string const name;
        int         grade;
};