//
//  Moto.hpp
//  TrainOpenClassroom3
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#ifndef Moto_hpp
#define Moto_hpp

#include <stdio.h>
#include "Vehicule.hpp"

class Moto : public Vehicule
{
public:
    Moto();
    Moto(int prix,double vitesse);
    virtual ~Moto();
    virtual void affiche()const;
    
private:
    double m_vitesse;
};

#endif /* Moto_hpp */
