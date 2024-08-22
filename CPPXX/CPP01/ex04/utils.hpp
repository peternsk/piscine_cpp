#ifndef DEFF_UTILS_HPP
#define DEFF_UTILS_HPP

#include <iostream>
#include <string>
#include <fstream>

void    progBanner();

void    progInfo(std::string &fileName, std::string &s1, std::string &s2);

void    searchNReplace(std::ifstream &file,std::string &s1, std::string &s2);

#endif