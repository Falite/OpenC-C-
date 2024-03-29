//
//  Vehicule.cpp
//  TrainOpenClassroom3
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#include "Vehicule.hpp"
#include <iostream>
#include <string>
using namespace std;

Vehicule::Vehicule(): m_prix(10000) {}
Vehicule::Vehicule(int prix): m_prix(prix){}
Vehicule::~Vehicule(){}

void Vehicule::affiche()const
{
    cout << " ceci est un véhicule qui vaut " << m_prix << "€ " << endl;
}
