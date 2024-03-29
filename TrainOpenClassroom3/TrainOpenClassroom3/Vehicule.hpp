//
//  Vehicule.hpp
//  TrainOpenClassroom3
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#ifndef Vehicule_hpp
#define Vehicule_hpp

#include <stdio.h>

class Vehicule
{
public:
    Vehicule();
    Vehicule(int prix);
    virtual ~Vehicule();
    virtual void affiche()const;
    
protected:
    int m_prix;
};
#endif /* Vehicule_hpp */
