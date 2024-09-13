/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:50:22 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/23 13:25:50 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void printBanner(){
    std::cout << std::endl;
    std::cout << "░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░░▒▓███████▓▒░░▒▓█▓▒░             ░▒▓███████▓▒░       ░▒▓████████▓▒░ " << std::endl;
    std::cout << "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░                    ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░ " << std::endl;
    std::cout << "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░                    ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░ " << std::endl;
    std::cout << "░▒▓████████▓▒░▒▓████████▓▒░▒▓███████▓▒░░▒▓█▓▒░    ▒▓█▓▒░    ░▒▓██████▓▒░       ░▒▓█▓▒░░▒▓█▓▒░ " << std::endl;
    std::cout << "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░             ░▒▓█▓▒░             ░▒▓█▓▒░░▒▓█▓▒░ " << std::endl;
    std::cout << "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░             ░▒▓█▓▒░      ░▒▓██▓▒░▒▓█▓▒░░▒▓█▓▒░ " << std::endl;
    std::cout << "░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░      ░▒▓████████▓▒░▒▓██▓▒░▒▓████████▓▒░ " << std::endl;
    std::cout << std::endl;
    std::cout << "                     ▒▓█ [ DEBUG - INFO - WARNING - ERROR ] █▓▒░" << std::endl;
    std::cout << std::endl;
}

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug(void){
    std::cout << "[ DEBUG ]" << std::endl;
}

void Harl::info(void){
    std::cout << "[ INFO ]" << std::endl;
}

void Harl::warning(void){
    std::cout << "[ WARNING ]" << std::endl;    
}

void Harl::error(void){
    std::cout << "[ ERROR ] " << std::endl;
}


int Harl::retPos(std::string level, std::string levelArr[4]){
    for(int i = 0; i < 4; i++){
        if(level == levelArr[i]){
            return i;
        }
    }
    return 0;
}

void Harl::complain(std::string level){
    std::string levelArr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void ((Harl::*funcArr[]))() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    int levelFunc = retPos(level, levelArr);
    (this->*funcArr[levelFunc])();
}