#include "ASpell.hpp"
ASpell::ASpell(){}

ASpell&  ASpell::operator=(ASpell const &ob){
    this->name = ob.getName();
    this->effects = ob.getEffects();
    return (*this);
}

ASpell::ASpell(ASpell const &ob){
    *this = ob;
}

ASpell::ASpell(std::string const &name, std::string const &f) : name(name), effects(f){}
ASpell::~ASpell(){}

const std::string &  ASpell::getName() const {return this->name;}
const std::string &ASpell::getEffects() const {return this->effects;}

void ASpell::launch(const ATarget &ob) {
    ob.getHitBySpell((*this));
}