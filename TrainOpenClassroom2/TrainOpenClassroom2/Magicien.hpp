//
//  Magicien.hpp
//  TrainOpenClassroom2
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#ifndef Magicien_hpp
#define Magicien_hpp
#include "Personnage.hpp"
#include <stdio.h>

class Magicien : public Personnage
{
public:
    Magicien();
    void bouleDeFeu()const;
    void bouleDeGlace()const;
    
private:
    int m_mana;
};

#endif /* Magicien_hpp */
