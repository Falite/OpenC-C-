//
//  Vehicule.hpp
//  TrainOpenClassroom3.1
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#ifndef Vehicule_hpp
#define Vehicule_hpp

#include <stdio.h>
class Vehicule
{
public:
    Vehicule(int prix);
    virtual void affiche()const;
    virtual int nbrRoues()const=0;
    virtual ~Vehicule();
protected:
    int m_prix;
    
};

class Voiture : public Vehicule
{
public:
    Voiture(int prix,int portes);
    virtual void affiche()const;
    virtual int nbrRoues()const;
    virtual ~Voiture();
private:
    int m_portes;
};

class Moto : public Vehicule
{
public:
    Moto(int prix,double vitesse);
    virtual void affiche()const;
    virtual int nbrRoues()const;
    virtual ~Moto();
private:
    double m_vitesse;
};
#endif /* Vehicule_hpp */
