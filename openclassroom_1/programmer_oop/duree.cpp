/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duree.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:46:16 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/02 14:59:29 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Duree.hpp"
 
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