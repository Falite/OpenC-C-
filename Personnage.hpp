//
//  Personnage.hpp
//  TrainOpenClassroom2
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#ifndef Personnage_hpp
#define Personnage_hpp

#include <stdio.h>
#include <iostream>

class Personnage {
public:
    Personnage();
    Personnage(std::string nom);
    void recevoirDegats(int degats);
    void coupdePoing(Personnage &cible)const;
    void sePresenter()const;
protected:
    int m_vie;
    std::string m_nom;
};

#endif /* Personnage_hpp */
