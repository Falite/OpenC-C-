//
//  Figure.hpp
//  TrainOpenClassroom4
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#ifndef Figure_hpp
#define Figure_hpp

#include <stdio.h>
#include <iostream>

class Figure
{
public:
    Figure();
    virtual void afficher() ;
    virtual double perimetre() = 0;
    virtual double aire() = 0;
};

class Triangle : public Figure
{
private:
    double m_base;
    double m_hauteur;
public:
    Triangle(double base,double hauteur);
    virtual void afficher();
    virtual double perimetre() ;
    virtual double aire();
};
class Carre : public Figure
{
private:
    double m_longueur;
public:
    Carre(double longueur);
    virtual void afficher();
    virtual double perimetre();
    virtual double aire();
};
class Cercle : public Figure
{
public:
    Cercle(double rayon);
    virtual void afficher();
    virtual double perimetre();
    virtual double aire();
private:
    double m_rayon;
    const double pi{3.14};
};
#endif /* Figure_hpp */
