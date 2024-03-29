//
//  Figure.cpp
//  TrainOpenClassroom3.1
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#include "Figure.hpp"
#include <iostream>
using namespace std;

void Figure::afficher(){
    cout << " Ceci est une figure. " << endl;
}

Triangle::Triangle(double base,double hauteur):m_base(base),m_hauteur(hauteur) {}
void Triangle::afficher(){
    cout << " Ceci est un triangle de base " << m_base << " cm, et de hauteur " << m_hauteur << ". " << endl;
}
double Triangle::perimetre(){
    return m_hauteur;
}
double Triangle::aire(){
    return (m_hauteur * m_base / 2.) ;
}

Carre::Carre(double longueur):m_longueur(longueur) {}
void Carre::afficher(){
    cout << " Ceci est un carré de côté " << m_longueur << " cm. " << endl;
}
double Carre::perimetre(){
    return 4.*m_longueur;
}
double Carre::aire(){
    return m_longueur*m_longueur;
}

Rectangle::Rectangle(double longueur,double largeur):m_longueur(longueur),m_largeur(largeur) {}

void Rectangle::afficher(){
    cout << " Ceci est un Rectangle de longueur " << m_longueur << " cm, et de largeur " << m_largeur << " cm. " << endl;
}
double Rectangle::perimetre(){
    return 2.*m_largeur+2.*m_longueur;
}
double Rectangle::aire(){
    return m_largeur*m_longueur;
}

Cercle::Cercle(double rayon):m_rayon(rayon) {}

void Cercle::afficher(){
    cout << " Ceci est un cercle de rayon " << m_rayon << " cm. " << endl;
}
double Cercle::perimetre(){
    return 2.*m_rayon*pi;
}
double Cercle::aire(){
    return m_rayon*m_rayon*pi;
}

