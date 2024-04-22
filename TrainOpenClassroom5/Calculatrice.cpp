//
//  Calculatrice.cpp
//  TrainOpenClassroom5
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#include "Calculatrice.hpp"
#include <iostream>
#include <string>
using namespace std;
double Calculatrice::pi= 3.14;

int Calculatrice::somme(std::vector<int> vector){
    int somme(0);
    for(int i=0; i<vector.size(); i++){
        somme+=vector[i];
    }
    return somme;
}

double Calculatrice::perimetreCercle(double rayon){
    return pi* rayon * rayon;
}
