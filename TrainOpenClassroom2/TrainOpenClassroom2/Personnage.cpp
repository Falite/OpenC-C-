//
//  Personnage.cpp
//  TrainOpenClassroom2
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#include "Personnage.hpp"
#include <iostream>
#include <string>
using namespace std;

Personnage::Personnage(): m_nom("Jack"),m_vie(100){}

Personnage::Personnage(string nom):m_nom(nom),m_vie(100){}

void Personnage::sePresenter()const
{
    cout << " Je suis " << m_nom << endl;
    cout << " J'ai encore " << m_vie << " de vie " << endl;
}

void Personnage::recevoirDegats(int degats){
    m_vie-=degats;
}

void Personnage::coupdePoing(Personnage &cible)const
{
    cible.recevoirDegats(10);
}

