//
//  Arme.hpp
//  TrainOpenClassroom
//
//  Created by Abdoullatif Omarjee on 02/03/2024.
//

#ifndef Arme_hpp
#define Arme_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Arme{
    private :
    std::string m_nom;
    int m_degats;
    
    public:
    //canonique
    Arme();
    ~Arme();
    Arme(std::string nom,int degats);
    void changer(std::string nom,int degats);
    void afficher()const;
    int dommages();
    Arme operator+(Arme const& a) ;
    
    
};
#endif /* Arme_hpp */
