#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook {
    private:
        SpellBook& operator=(SpellBook const &ob);
        SpellBook(SpellBook const &ob);
        std::map<std::string, ASpell *> arr_spell;
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *ob);
        void forgetSpell(std::string const & name);
       ASpell* createSpell(std::string const &name);
};

#endif