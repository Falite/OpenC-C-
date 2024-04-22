//
//  main.cpp
//  TrainOpenClassroom2
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#include <iostream>
#include "Personnage.hpp"
#include "Magicien.hpp"
#include "Guerrier.hpp"

int main(int argc, const char * argv[]) {
    Personnage Marcel("Marcel");
    Marcel.sePresenter();
    Guerrier Lancelot("lancelot");
    Lancelot.sePresenter();
}
