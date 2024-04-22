//
//  Calculatrice.hpp
//  TrainOpenClassroom5
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#ifndef Calculatrice_hpp
#define Calculatrice_hpp

#include <stdio.h>
#include <vector>

class Calculatrice{
public:
    static int somme(std::vector<int> vector);
    static double perimetreCercle(double rayon);
private:
    static double pi;
};

#endif /* Calculatrice_hpp */
