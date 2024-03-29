//
//  Personnage.hpp
//  TrainOpenClassroom
//
//  Created by Abdoullatif Omarjee on 02/03/2024.
//

#ifndef Personnage_hpp
#define Personnage_hpp

#include <stdio.h>
#include <string>
#include "Arme.hpp"

class Personnage{
    //attributs
    private :
    
    std::string m_nom;
    int m_vie;;
    int m_mana;
    Arme *m_arme;
    
    
    //Methodes
    public :
    
    //fonctions de base
    Personnage();
    Personnage(std::string nom, std::string nomArme, int degatsArme);
    Personnage(Personnage const& autre);
    ~Personnage();
    
    //fonctions ajoutées
    std::string afficherNom()const;
    void afficherEtat()const;
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant()const;
    void afficherPointeur()const; 
};
#endif /* Personnage_hpp */

