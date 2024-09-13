#ifndef DEFF_UTILS_HPP
#define DEFF_UTILS_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>
#include <thread>
#include <unistd.h>

void    progBanner();

void    progInfo(std::string &fileName, std::string &s1, std::string &s2);

void    searchNReplace(std::string &fileName, std::ifstream &file,std::string &s1, std::string &s2);

#endif