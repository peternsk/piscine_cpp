#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator() {
    std::map<std::string, ATarget *>::iterator it_begin = this->arr_spell.begin();
    std::map<std::string, ATarget *>::iterator it_end = this->arr_spell.end();
    while (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
}
void TargetGenerator::learnTargetType(ATarget *ob) {
    if(ob)
        arr_spell.insert(std::pair<std::string, ATarget *>(ob->getType(), ob->clone()));
}
void TargetGenerator::forgetTargetType(std::string const & name) {
     std::map<std::string, ATarget *>::iterator it = arr_spell.find(name);
    if (it != arr_spell.end())
        delete it->second;
    arr_spell.erase(name);
}

ATarget* TargetGenerator::createTarget(std::string const &name)
{
     std::map<std::string, ATarget *>::iterator it = arr_spell.find(name);
    if (it != arr_spell.end())
        return (arr_spell[name]);
    return (NULL);
}