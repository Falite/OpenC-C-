//
//  Moto.cpp
//  TrainOpenClassroom3
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#include "Vehicule.hpp"
#include "Moto.hpp"
#include <iostream>
#include <string>
using namespace std;

Moto::Moto(): Vehicule() {}

Moto::Moto(int prix,double vitesse): Vehicule(prix),m_vitesse(vitesse) {}

Moto::~Moto(){}

void Moto::affiche()const
{
    cout << " ceci est une moto qui va à " << m_vitesse << " kilomètres par heure " << endl;
}
