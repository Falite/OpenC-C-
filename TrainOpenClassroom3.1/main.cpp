//
//  main.cpp
//  TrainOpenClassroom3.1
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#include <iostream>
#include "Vehicule.hpp"
#include "Figure.hpp"
#include <vector>
using namespace std;


void presenter(Vehicule const& v){
    v.affiche();
}

int main() {
    vector<Figure*> Vectueur;
    Vectueur.push_back(new Triangle(2.,4.));
    Vectueur.push_back(new Rectangle(3.,5.));
    Vectueur.push_back(new Carre(6.));
    Vectueur.push_back(new Cercle(7.));
    
    for(int i=0;i<Vectueur.size();i++){
        Vectueur[i]->afficher();
        cout << "perimetre : " << endl;
        cout << Vectueur[i]->perimetre() << endl;
        cout << "aire : " << endl;
        cout << Vectueur[i]->aire() << endl;
    }
    
    for (int i=0;i<Vectueur.size();i++){
        delete Vectueur[i];
        Vectueur[i]=0;
    }
    
    
    return 0;
}
