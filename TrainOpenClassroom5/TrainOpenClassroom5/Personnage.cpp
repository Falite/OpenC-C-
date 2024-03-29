//
//  Personnage.cpp
//  TrainOpenClassroom5
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#include "Personnage.hpp"
#include <iostream>
using namespace std;

int Personnage::compteur=0;

Personnage::Personnage(std::string nom):m_nom(nom) {
    ++compteur;
}

Personnage::~Personnage(){
    --compteur;
}

int Personnage::NombreInstances(){
    return compteur;
}
