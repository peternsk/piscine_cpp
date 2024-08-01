/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arme.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:33:15 by peternsaka        #+#    #+#             */
/*   Updated: 2024/07/30 14:40:40 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARME_HPP
#define ARME_HPP

#include <iostream>
#include <string>

class Arme
{
	public:
	  	Arme();
    	Arme(std::string nom, int degats);
    	void changer(std::string nom, int degats);
    	void afficher() const;

	private:
	std::string m_nom;
	int m_degat;

};

#endif
