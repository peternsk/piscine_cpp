/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:41:16 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/22 21:32:53 by pnsaka           ###   ########.fr       */
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

void    searchNReplace(std::string &fileName, std::ifstream &file,std::string &s1, std::string &s2){
    
    std::ofstream outfile;

    std::string newFile = (fileName + ".replace");
    
    outfile.open(newFile);
    if(outfile.fail())
	{
		std::cout << "Input file opening failed.\n";
		exit(1);
	}
    
    std::string tmpLine;
    std::size_t found = 0;
    
    while(std::getline(file, tmpLine))
    {
        while(found != std::string::npos){
            found = tmpLine.find(s1, found);
            
            if(found == std::string::npos)
                break;
            
            tmpLine.erase(found, s1.length());
            tmpLine.insert(found, s2);
            found += s2.length();
        }
        found = 0;
        outfile << tmpLine;
        if(file.peek() !=  std::ifstream::traits_type::eof())
            outfile << std::endl;
        // std::cout << tmpLine << std::endl;
    }
}

