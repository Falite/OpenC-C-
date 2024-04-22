//
//  Figure.cpp
//  TrainOpenClassroom4
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#include "Figure.hpp"
#include <iostream>
#include <string>
using namespace std;

Triangle::Triangle(double base,double hauteur):m_base(base),m_hauteur(hauteur) {}
Carre::Carre(double longueur):m_longueur(longueur) {}

void Figure::afficher(){
    cout << " ceci est une figure " << endl;
}

void Triangle::afficher(){
    cout << " ceci est un Triangle " << endl;
}

void Carre::afficher(){
    cout << " ceci est un carré " << endl;
}

void Cercle::afficher(){
    cout << " ceci est un cercle " << endl;
}

double Triangle::aire(){
    return (m_base*m_hauteur) /2 ;
}

double Carre::aire(){
    return (m_longueur*m_longueur) ;
}

double Cercle::aire(){
    return m_rayon*m_rayon*pi;
}

double Carre::perimetre(){
    return 4.*m_longueur ;
}

double Cercle::perimetre(){
    return (m_rayon+m_rayon)*pi;
}

double Triangle::perimetre()
{
    return 0.0;
}
