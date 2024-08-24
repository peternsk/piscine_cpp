#ifndef DEF_HARL_HPP
#define DEF_HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    public:
        Harl();
        ~Harl();

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

        int  retPos(std::string level, std::string levelArr[4]);
        void complain(std::string level);

    private:
        // int levelFunc;
};

void printBanner();

#endif