//
//  Guerrier.cpp
//  TrainOpenClassroom2
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#include "Guerrier.hpp"
#include "Personnage.hpp"
#include <iostream>
#include <string>
using namespace std;

Guerrier::Guerrier(string nom): Personnage(nom){}
void Guerrier::frapperAvecUnMarteau()const
{
    
}

void Guerrier::sePresenter()
{
    Personnage::sePresenter();
    cout << " et je suis un guerrier " << endl;
}
