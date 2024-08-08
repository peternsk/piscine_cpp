/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duree.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:46:16 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/07 12:30:54 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Duree.hpp"
#include <string>
#include <iostream>
 
Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}

bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);   
}

bool Duree::estPlusPetitQue(Duree const& b) const
{
    if(m_heures < b.m_heures)
        return(true);
    else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
        return(true);
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes)
        return(true);
    else
        return false;
}

bool Duree::estPlusGrandQue(Duree const& b) const
{
    if(m_heures > b.m_heures)
        return(true);
    else if (m_heures == b.m_heures && m_minutes > b.m_minutes)
        return(true);
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes > b.m_secondes)
        return(true);
    else
        return false;
}

Duree& Duree::operator+=(const Duree& a)
{
    m_secondes += a.m_secondes;
    m_minutes += m_secondes / 60;
    m_secondes %= 60;
    
    m_minutes += a.m_minutes;
    m_heures += m_minutes / 60;
    m_minutes %= 60;

    m_heures += a.m_heures;
    
    return *this;
}

void Duree::afficher(){
    std::cout << m_heures << "h" << m_minutes << "m" << m_secondes << "s" << std::endl;
}

bool operator == (Duree const& a, Duree const& b){
    return a.estEgal(b);
}

bool operator != (Duree const& a, Duree const& b){
    return not (a.estEgal(b));
}

bool operator < (Duree const& a, Duree const& b){
    return a.estPlusPetitQue(b);
}

bool operator > (Duree const& a, Duree const& b){
    return a.estPlusGrandQue(b);
}

Duree operator + (Duree const& a, Duree const& b){
    Duree copie(a);
    copie += b;
    return(copie);
}

void Duree::afficher(std::ostream &flux) const
{
    flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}

// ostream& operator<<(ostream &flux, Duree const& duree){
//     // ???
//     return(flux);
// }