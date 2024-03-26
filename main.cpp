//
//  main.cpp
//  TrainOpenClassroom
//
//  Created by Abdoullatif Omarjee on 28/02/2024.
//

#include "main.hpp"
#include "Personnage.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;



int main(){
    
    Personnage Vegeta;
    Personnage Goku(Vegeta);
    
    Vegeta.afficherPointeur();
    Goku.afficherPointeur();
    
    return 0;
}
