/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Time.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:27:22 by pnsaka            #+#    #+#             */
/*   Updated: 2024/08/12 13:50:33 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Time.hpp"

Time::Time(int heures, int minutes, int secondes) 
    : m_heures(heures), m_minutes(minutes), m_secondes(secondes){
}

void Time::afficher(std::ostream &out) const
{
    out << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}

std::ostream &operator<<( std::ostream &out, Time const& time )
{
    time.afficher(out) ;
    return out;
}