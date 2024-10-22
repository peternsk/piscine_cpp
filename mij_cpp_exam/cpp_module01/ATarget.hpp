#ifndef ATARGET_HPP
#define  ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    private:
        std::string type;
    public:
        ATarget();
        ATarget& operator=(ATarget const &ob);
        ATarget(ATarget const &ob);
        ATarget(std::string const &name);
        virtual ~ATarget();
        const std::string &  getType() const ;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(const ASpell &ob) const;
};

#endif