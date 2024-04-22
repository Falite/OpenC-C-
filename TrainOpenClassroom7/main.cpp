//
//  main.cpp
//  TrainOpenClassroom7
//
//  Created by Abdoullatif Omarjee on 16/04/2024.
//

#include <iostream>
#include <string>
#include "Erreur.hpp"
using namespace std;

double division(double a,double b){
        if(b==0)
            throw Erreur(1,"division par zéro",2);
        else
            return a/b;
}

template <typename T>
T maximum(T const& a, T const& b){
    if(a>b)
        return a;
    else
        return b;
}

int main() {
    double a(3.);
    cout << " a = " << a << endl;
    double b(0.);
    cout << " b = " << b << endl;
    try{
        cout << division(a,b) << endl;
    }
    catch(exception const& e){
        cerr << e.what() << endl;
    }
    
    char a1('a');
    char a2('b');
    cout << maximum(a1,a2) << endl;
    
    return 0;
}
