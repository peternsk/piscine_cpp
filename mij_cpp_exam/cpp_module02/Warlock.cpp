#include "Warlock.hpp"

Warlock::Warlock(std::string const &na, std::string const &t) : name(na), title(t){
    book = new SpellBook;
    std::cout<< this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << this->name<<": My job here is done!" << std::endl;
    delete book;
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
    book->learnSpell(ob);
    
}

void Warlock::forgetSpell(std::string name) {
    book->forgetSpell(name);
}   

void Warlock::launchSpell(std::string name, const ATarget &obj) {
    ASpell *p = book->createSpell(name);
    if (p)
        p->launch(obj);
}