//
//  Erreur.cpp
//  TrainOpenClassroom7
//
//  Created by Abdoullatif Omarjee on 16/04/2024.
//

#include "Erreur.hpp"
#include <string>
using namespace std;

Erreur::Erreur(int numero,string const& phrase,int niveau):m_numero(numero),m_phrase(phrase),m_niveau(niveau) {}

const char* Erreur::what()const throw(){
    return m_phrase.c_str();
}
int Erreur::getNiveau()const throw(){
    return m_niveau;
}
Erreur::~Erreur() throw(){}
