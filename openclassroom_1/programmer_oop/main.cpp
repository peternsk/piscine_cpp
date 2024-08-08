/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:01:53 by peternsaka        #+#    #+#             */
/*   Updated: 2024/08/08 16:05:46 by pnsaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Duree.hpp"
#include "Vehicule.hpp"
#include "Voiture.hpp"
#include "Moto.hpp"
#include <string>
#include <iostream>

int main(void)
{
    // Duree duree1(0, 1000, 2);
    // Duree duree2(0, 15, 2);
    // Duree res;

    // if(duree1 > duree2)
    //     std::cout << "duree 1 plus grand" << std::endl;
    // else 
    //     std::cout << "duree 1 n'est pas plus grand" << std::endl;
    
    // Duree res, duree1(1, 45, 50), duree2(1, 15, 50);

    // duree1.afficher();
    // std::cout << " + " << std::endl;
    // duree2.afficher();

    // // duree1 += duree2;

    // std::cout << " donne " << std::endl;
    // // duree1.afficher();

    // res =  duree1 + duree2; 
    
    // res.afficher();

    // Duree duree1(2, 25, 28), duree2(0, 16, 33);
    
    // std::cout << duree1 << " et " << duree2 << std::endl;


    // Guerrier lancelot("Lancelot du Lac");
    // lancelot.sePresenter();
    // std::cout << std::endl;
    // Player marcel("Marcel");
    // marcel.sePresenter();

    Vehicule v;
    v.affiche();    //Affiche "Ceci est un vehicule."

    Moto m;
    m.affiche();    //Affiche "Ceci est une moto."

    return 0;
}
