//
//  Arme.cpp
//  TrainOpenClassroom
//
//  Created by Abdoullatif Omarjee on 02/03/2024.
//

#include "Arme.hpp"
#include <string>
using namespace std;

Arme::Arme() : m_nom("Epee rouillee") , m_degats(10) {}
Arme::~Arme(){
    
}
Arme::Arme(string nom,int degats): m_nom(nom) , m_degats(degats){}

void Arme::changer(string nom,int degats){
    m_nom=nom;
    m_degats=degats;
}
void Arme::afficher()const{
    cout << "Arme : " << m_nom << " ( Degats : " << m_degats << ") "<< endl;
}

int Arme::dommages(){
    return m_degats;
}

Arme Arme::operator+( Arme const& a)
{
    Arme c;
    c.m_degats=m_degats+a.m_degats;
    c.m_nom=m_nom;
    return c;
}

