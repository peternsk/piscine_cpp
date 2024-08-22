/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:41:16 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/22 13:42:08 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void    progBanner(){
    
    std::cout << " ███████╗███████╗ █████╗ ██████╗  ██████╗██╗  ██╗    ███╗   ██╗    ██████╗ ███████╗██████╗ ██╗      █████╗  ██████╗███████╗" << std::endl;
    std::cout << " ██╔════╝██╔════╝██╔══██╗██╔══██╗██╔════╝██║  ██║    ████╗  ██║    ██╔══██╗██╔════╝██╔══██╗██║     ██╔══██╗██╔════╝██╔════╝" << std::endl;
    std::cout << " ███████╗█████╗  ███████║██████╔╝██║     ███████║    ██╔██╗ ██║    ██████╔╝█████╗  ██████╔╝██║     ███████║██║     █████╗  " << std::endl;
    std::cout << " ╚════██║██╔══╝  ██╔══██║██╔══██╗██║     ██╔══██║    ██║╚██╗██║    ██╔══██╗██╔══╝  ██╔═══╝ ██║     ██╔══██║██║     ██╔══╝  " << std::endl;
    std::cout << " ███████║███████╗██║  ██║██║  ██║╚██████╗██║  ██║    ██║ ╚████║    ██║  ██║███████╗██║     ███████╗██║  ██║╚██████╗███████╗" << std::endl;
    std::cout << " ╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝    ╚═╝  ╚═══╝    ╚═╝  ╚═╝╚══════╝╚═╝     ╚══════╝╚═╝  ╚═╝ ╚═════╝╚══════╝" << std::endl;
    std::cout << std::endl;
}

void    progInfo(std::string &fileName, std::string &s1, std::string &s2){
    
    std::cout << "Enter the name of the file to modify : "<< std::endl;
    std::cin >> fileName;
    std::cout << "String you are searching : " << std::endl;
    std::cin >> s1;
    std::cout << "String you want to replace with : " << std::endl;
    std::cin >> s2;
}

void    searchNReplace(std::ifstream &file,std::string &s1, std::string &s2){
    
    std::ofstream outfile ("file.replace");
    outfile.open("file.replace", std::ios_base::app);
    if(outfile.fail())
	{
		std::cout << "Input file opening failed.\n";
		exit(1);
	}
    
    std::string tmpLine;
    std::size_t found = 0;
    
    while(!std::getline(file, tmpLine))
    {
        found = tmpLine.find(s1, found);
        if(found == tmpLine.find(s1, found) && found <= tmpLine.size()){
            tmpLine.erase(found, s1.length());
            tmpLine.insert(found, s2);
            found += s2.length();
        }
        outfile << tmpLine;
        std::cout << tmpLine << std::endl;
    }
}

