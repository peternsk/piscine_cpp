/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template_intro.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:17:54 by peternsaka        #+#    #+#             */
/*   Updated: 2024/09/24 14:29:31 by peternsaka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template< typename T>
T maximum(T &a, T &b){
	if(a > b)
		return a;
	else
		return b;
}

int main()
{
     double pi(3.14);
     double e(2.71);

     std::cout << maximum<double>(pi,e) << std::endl; //Utilise la "version double"de la fonction

     int cave(-1);
     int dernierEtage(12);

     std::cout << maximum<int>(cave,dernierEtage) << std::endl; //Utilise la "version int" de la fonction

     unsigned int a(43);
     unsigned int b(87);

     std::cout << maximum<unsigned int>(a,b) << std::endl; //Utilise la "version unsigned int" de la fonction.

     return 0;
}
