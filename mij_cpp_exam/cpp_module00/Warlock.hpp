#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>

class Warlock {
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock& operator=(Warlock const &ob);
        Warlock(Warlock const &ob);
    public:
        Warlock(std::string const &name, std::string const &n);
        ~Warlock();
        const std::string &  getName() const ;
        const std::string &getTitle() const;
        void setTitle(std::string const &t);
        void introduce() const; 
};

#endif