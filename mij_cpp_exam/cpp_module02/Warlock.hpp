#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock& operator=(Warlock const &ob);
        Warlock(Warlock const &ob);
        SpellBook *book;

    public:
        Warlock(std::string const &name, std::string const &n);
        ~Warlock();
        const std::string &  getName() const ;
        const std::string &getTitle() const;
        void setTitle(std::string const &t);
        void introduce() const; 
        void learnSpell(ASpell *ob);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, const ATarget &obj);
};

#endif