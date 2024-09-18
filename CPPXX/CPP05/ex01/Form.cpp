/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:15:06 by pnsaka            #+#    #+#             */
/*   Updated: 2024/09/18 14:25:27 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Form {
    public:
        Form();
        Form(const Form& cpy);
        Form& operator=( const Form& objForm);
        
        ~Form();
    private:
        std::string name;
        bool 
}
