/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:00:55 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/23 11:42:10 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ROBOTOMYREQUESTFORM
#define DEF_ROBOTOMYREQUESTFORM

#include <iostream>
#include <string>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

/******************************************************************************/
/**** CLASS                     ***********************************************/
/******************************************************************************/

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const& cpy);
        RobotomyRequestForm(std::string m_name, int m_gradeSign, int m_gradeExecute, std::string m_target);

        ~RobotomyRequestForm();

        RobotomyRequestForm& operator=( const RobotomyRequestForm &obj);

        void execute(Bureaucrat const & executor) const;
        std::string getTarget();
        
    private:
        std::string const target;
};





#endif