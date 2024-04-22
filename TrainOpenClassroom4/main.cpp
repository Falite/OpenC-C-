//
//  main.cpp
//  TrainOpenClassroom4
//
//  Created by Abdoullatif Omarjee on 19/03/2024.
//

#include "Figure.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector <Figure*> listeFigures;
    listeFigures.push_back(new Triangle(12.5,5.6));
    return 0;
}
