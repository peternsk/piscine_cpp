/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:05:03 by peternsaka        #+#    #+#             */
/*   Updated: 2024/10/04 10:48:23 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	megaphone(std::string s){
	int i = 0;

	while(s[i]){
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		std::cout << s[i] ;
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 0;

	if(ac > 1)
	{
		while(av[++i])
			megaphone(av[i]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}
