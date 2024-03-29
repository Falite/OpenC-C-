//
//  Fraction.cpp
//  TrainOpenClassroom5
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#include "Fraction.hpp"
#include <iostream>
using namespace std;

Fraction::Fraction(int num,int den):m_numerateur(num),m_denominateur(den) {}
Fraction::Fraction(int x):m_numerateur(x),m_denominateur(1) {}

Fraction::Fraction():m_numerateur(0),m_denominateur(1){}

void Fraction::affiche(ostream& flux)const {
    if(m_denominateur==1){
        flux << m_numerateur ;
    }
    else{
        flux << m_numerateur << "/" << m_denominateur ;
    }
}

ostream& operator<<(std::ostream& flux , Fraction const& fraction){
    fraction.affiche(flux);
    return flux;
}
