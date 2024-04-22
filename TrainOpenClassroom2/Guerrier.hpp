//
//  Guerrier.hpp
//  TrainOpenClassroom2
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#ifndef Guerrier_hpp
#define Guerrier_hpp
#include "Personnage.hpp"
#include <stdio.h>

class Guerrier : public Personnage
{
public:
    Guerrier(std::string nom);
    void frapperAvecUnMarteau()const;
    void sePresenter();
};


#endif /* Guerrier_hpp */
