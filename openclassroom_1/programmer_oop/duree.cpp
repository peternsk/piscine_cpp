/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duree.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:46:16 by peternsaka        #+#    #+#             */
/*   Updated: 2024/07/31 21:47:01 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "duree.hpp"

// Duree::Duree(int heure, int minute, int seconde) : m_heures(heure), m_minutes(minute), m_secondes(seconde)
// {
// }

#include "Duree.hpp"
 
Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}
bool operator==(Duree const& a, Duree const& b)
{
    if(a.m_heures == b.m_heures && a.m_minutes == b.m_minutes && a.m_secondes == b.m_secondes)
        return(true);
    else
        return(false);
}