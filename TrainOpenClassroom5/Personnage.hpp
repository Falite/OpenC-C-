//
//  Personnage.hpp
//  TrainOpenClassroom5
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#ifndef Personnage_hpp
#define Personnage_hpp

#include <stdio.h>
#include <iostream>

class Personnage {
public:
    Personnage(std::string nom);
    ~Personnage();
    
    static int NombreInstances();
private:
    std::string m_nom;
    static int compteur;
    
};

#endif /* Personnage_hpp */
