#include "ATarget.hpp"

ATarget::ATarget(){}
ATarget& ATarget::operator=(ATarget const &ob){
    this->type = ob.getType();
    return (*this);
}

ATarget::ATarget(ATarget const &ob) {
    *this = ob;
}
ATarget::ATarget(std::string const &name) : type(name){}
ATarget::~ATarget(){}
const std::string &  ATarget::getType() const { return this->type;}

void ATarget::getHitBySpell(const ASpell &ob) const{
    std::cout << this->type <<" has been "<< ob.getEffects()<< "!" << std::endl;
}