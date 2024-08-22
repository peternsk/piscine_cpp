/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:49:20 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/22 11:13:20 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(void)
{
    std::string fileName;
    std::string s1;
    std::string s2;
    
    progBanner();
    progInfo(fileName, s1, s2);

    std::ofstream outfile ("file.replace");

    outfile << "my text here!" << std::endl;

    outfile.close();
}