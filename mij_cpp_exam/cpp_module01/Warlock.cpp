#include "Warlock.hpp"

Warlock::Warlock(std::string const &na, std::string const &t) : name(na), title(t){
    std::cout<< this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << this->name<<": My job here is done!" << std::endl;
    std::map<std::string, ASpell *>::iterator it_begin = this->arr_spell.begin();
    std::map<std::string, ASpell *>::iterator it_end = this->arr_spell.end();
    while (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
}

void Warlock::setTitle(std::string const &t){
    this->title = t;
}

void  Warlock::introduce() const {
    std::cout<<this->name <<": I am "<<this->name<<", " <<this->title<<"!" << std::endl;
}

const std::string &  Warlock::getName() const {
    return (this->name);
}
const std::string &Warlock::getTitle() const{return this->title;}


void Warlock::learnSpell(ASpell *ob){
    if(ob)
        arr_spell.insert(std::pair<std::string, ASpell *>(ob->getName(), ob->clone()));
}
void Warlock::forgetSpell(std::string name) {
    std::map<std::string, ASpell *>::iterator it = arr_spell.find(name);
    if (it != arr_spell.end())
        delete it->second;
    arr_spell.erase(name);
}

void Warlock::launchSpell(std::string name, const ATarget &obj) {
    ASpell *sp = arr_spell[name];
    if (sp)
        sp->launch(obj);
}