//
//  Duree.cpp
//  TrainOpenClassroom5
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#include "Duree.hpp"
#include <iostream>
using namespace std;

Duree::Duree(int s,int m, int h):m_secondes(s),m_minutes(m),m_heures(h) {}

void Duree::affiche(ostream& out)const {
    
}

ostream& operator<< (ostream& flux,Duree const& duree){
    duree.affiche(flux);
    return flux;
}
