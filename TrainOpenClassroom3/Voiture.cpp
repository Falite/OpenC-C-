//
//  Voiture.cpp
//  TrainOpenClassroom3
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#include "Vehicule.hpp"
#include "Voiture.hpp"
#include <iostream>
#include <string>
using namespace std;

Voiture::~Voiture(){}

Voiture::Voiture():Vehicule(),m_porte(4){}
Voiture::Voiture(int prix,int porte): Vehicule(prix), m_porte(porte) {}

void Voiture::affiche()const{
    cout << " ceci est une voiture à "<< m_porte << " portes." << endl;
}
