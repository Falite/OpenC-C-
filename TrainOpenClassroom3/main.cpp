//
//  main.cpp
//  TrainOpenClassroom3
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#include "Vehicule.hpp"
#include "Voiture.hpp"
#include "Moto.hpp"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
    /*vector<Vehicule*>listeVehicules;
    listeVehicules.push_back(new Voiture(15000,5));
    listeVehicules.push_back(new Voiture(12000,3));
    listeVehicules.push_back(new Moto(2000,212.5));
    
    
    
    for(int i=0;i<listeVehicules.size();i++){
        delete listeVehicules[i];
        listeVehicules[i]=0;
    }*/
    
    Moto v(2000,212.5);
    v.affiche();
    return 0;
}
