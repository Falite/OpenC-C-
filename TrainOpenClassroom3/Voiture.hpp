//
//  Voiture.hpp
//  TrainOpenClassroom3
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#ifndef Voiture_hpp
#define Voiture_hpp

#include <stdio.h>
#include "Vehicule.hpp"

class Voiture: public Vehicule
{
public:
    virtual void affiche()const;
    virtual ~Voiture();
    Voiture();
    Voiture(int prix,int porte);
    
private:
    int m_porte;
};

#endif /* Voiture_hpp */
