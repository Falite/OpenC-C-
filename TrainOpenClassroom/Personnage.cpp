//
//  Personnage.cpp
//  TrainOpenClassroom
//
//  Created by Abdoullatif Omarjee on 02/03/2024.
//

#include "Personnage.hpp"
#include <string>
#include <iostream>
using namespace std;

//Methodes de base
Personnage::Personnage(){
    m_nom="inconnu";
    m_vie=100;
    m_mana=100;
    m_arme=new Arme();
}
Personnage::Personnage(string nom, string nomArme,int degatsArme):m_vie(100),m_mana(100),m_arme(nullptr){
    m_nom=nom;
    m_arme=new Arme(nomArme,degatsArme);
    m_vie=100;
    m_mana=100;
}
Personnage::Personnage(Personnage const& autre):
m_vie(autre.m_vie),m_mana(autre.m_mana),m_arme(nullptr)
{
    m_arme=new Arme(*(autre.m_arme));
    
}

Personnage::~Personnage(){
    delete m_arme;
}


//Methodes
string Personnage::afficherNom()const{
    return m_nom;
}
void Personnage::recevoirDegats(int nbDegats){
    m_vie-=nbDegats;
    if(m_vie<0){
        m_vie=0;
    }
}
void Personnage::attaquer(Personnage &cible){
    int dommage = m_arme->dommages();
    cible.recevoirDegats(dommage);
    cout << m_nom << " attaque " << cible.afficherNom() <<" !"<< endl;
}
void Personnage::boirePotionDeVie(int quantitePotion){
    m_vie+=quantitePotion;
    if( m_vie>100){
        m_vie=100;
    }
}
void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme){
    m_arme->changer(nomNouvelleArme,degatsNouvelleArme);
}
bool Personnage::estVivant()const{
    return m_vie>0;
}

void Personnage::afficherEtat()const{
    cout << "etat de : "<< m_nom << " vie : " << m_vie << " mana : " << m_mana << endl;
    m_arme->afficher();
}

void Personnage::afficherPointeur()const{
    cout << m_arme << endl;
}
