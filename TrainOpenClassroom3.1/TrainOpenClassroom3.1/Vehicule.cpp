//
//  Vehicule.cpp
//  TrainOpenClassroom3.1
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#include "Vehicule.hpp"
#include <iostream>
using namespace std;

void Vehicule::affiche()const {
    cout << "Ceci est un véhicule qui coûte "<< m_prix << " euros. " << endl;
}

void Voiture::affiche()const {
    cout << "Ceci est une voiture qui coûte "<< m_prix << " euros et qui a " << m_portes << " portes. " << endl;
}

void Moto::affiche()const {
    cout << "Ceci est une moto qui coûte "<< m_prix << " et qui va à "<< m_vitesse << " km/h. " << endl;
}

Vehicule::Vehicule(int prix):m_prix(prix) {}

Voiture::Voiture(int prix,int portes):Vehicule(prix),m_portes(portes) {}

Moto::Moto(int prix,double vitesse):Vehicule(prix),m_vitesse(vitesse) {}

Vehicule::~Vehicule() {}

Voiture::~Voiture() {}

Moto::~Moto() {}

int Voiture::nbrRoues()const{
    return 4;
}
int Moto::nbrRoues()const{
    return 2;
}
