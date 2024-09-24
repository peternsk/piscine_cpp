/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:00:43 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/23 11:28:30 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PRESIDENTIALPARDONFORM
#define DEF_PRESIDENTIALPARDONFORM

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

/******************************************************************************/
/**** CLASS                     ***********************************************/
/******************************************************************************/

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const& cpy);
        PresidentialPardonForm(std::string m_name, int m_gradeSign, int m_gradeExecute, std::string m_target);

        ~PresidentialPardonForm();

        PresidentialPardonForm& operator=( const PresidentialPardonForm &obj);

        void execute(Bureaucrat const & executor) const;
        std::string getTarget();

    private:
        std::string const target;
};


#endif