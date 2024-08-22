/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:49:20 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/22 13:37:04 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(void)
{
    std::string fileName;
    std::string s1;
    std::string s2;

    std::ifstream fin;
	fin.open("testFile.txt");
    if(fin.fail())
	{
		std::cout << "Input file opening failed.\n";
		exit(1);
	}
    
    progBanner();
    progInfo(fileName, s1, s2);
    searchNReplace(fin, s1, s2);

    fin.close();
}