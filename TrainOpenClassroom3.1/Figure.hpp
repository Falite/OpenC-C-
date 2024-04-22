//
//  Figure.hpp
//  TrainOpenClassroom3.1
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#ifndef Figure_hpp
#define Figure_hpp

#include <stdio.h>
class Figure {
public:
    virtual void afficher();
    virtual double perimetre() =0;
    virtual double aire() =0;
};

class Triangle : public Figure {
public:
    Triangle(double base,double hauteur);
    virtual void afficher();
    virtual double perimetre();
    virtual double aire();
protected:
    double m_base;
    double m_hauteur;
};

class Carre : public Figure {
public:
    Carre(double longueur);
    virtual void afficher();
    virtual double perimetre();
    virtual double aire();
protected:
    double m_longueur;
    
};

class Rectangle : public Figure {
public:
    Rectangle(double longueur,double largeur);
    virtual void afficher();
    virtual double perimetre();
    virtual double aire();
protected:
    double m_longueur;
    double m_largeur;
};

class Cercle : public Figure {
public:
    Cercle(double rayon);
    virtual void afficher();
    virtual double perimetre();
    virtual double aire();
protected:
    double m_rayon;
    const double pi{3.14};
};


#endif /* Figure_hpp */
