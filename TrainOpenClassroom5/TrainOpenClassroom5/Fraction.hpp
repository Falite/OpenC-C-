//
//  Fraction.hpp
//  TrainOpenClassroom5
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#ifndef Fraction_hpp
#define Fraction_hpp

#include <stdio.h>
#include <iostream>

class Fraction {
private:
    int m_numerateur;
    int m_denominateur;
public:
    Fraction(int num = 0,int den = 1);
    Fraction(int x);
    Fraction();
    
    void affiche(std::ostream& flux)const ;
    
};
std::ostream& operator<<(std::ostream& flux , Fraction const& fraction);

#endif /* Fraction_hpp */
