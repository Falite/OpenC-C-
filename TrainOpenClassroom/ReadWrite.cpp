//
//  ReadWrite.cpp
//  TrainOpenClassroom
//
//  Created by Abdoullatif Omarjee on 28/02/2024.
//

#include <stdio.h>
#include <iostream>
#include <fstream>  //littéralement "flux vers fichiers"
using namespace std;  //On en a besoin


int main(){
    /*pour ouvrir un flux*/
    string const nom("/Users/abdoullatifomarjee/exemple.txt");
    ofstream exempleflux(nom.c_str()); //littéralement "ouvrir un flux"
    //le .c_str() est indispensable ici
    // NB : si exemple.txt n'existe pas , il le créera
    
    
    
    /* tester si tout est OK :*/
    if(exempleflux){
    }
    else{
        cout << "impossible d'ouvrir le fichier" << endl;  //pratique si y'a eu un problème
    }
    
    
    /*écrire dans un flux*/
    if(exempleflux){
        exempleflux << "j'aime les pieds" << endl; //écrire à la première ligne
        exempleflux << 383828 << endl;
        int bzez(90);
        char bonnet('D');
        exempleflux << "j'aime les seins qui sont minimum " << bzez << bonnet << endl;
    }
    
    
    /*écrire à la fin d'un fichier ( pour ne pas supprimer )*/
//  ofstream exempleflux(nom.c_str(),ios::app);
    // on rajoute ios::app pour "append" cta dire rajouter à la fin
    
    
    
    /*lire un fichier*/
    string ligne;
    while(getline(exempleflux,ligne)){
        cout << ligne << endl;
    }
    
    //il en existe d'autres mais bon pas grand intérêt
    
    
    /*position du curseur*/
    int position(0);
    //si c'est dans un ofstream
    position=exempleflux.tellp();
    
    //si c'est dans un ifstream
    position=exempleflux.tellg();
    
    /*se deplacer dans un fichier*/
    //si c'est dans un ofstream
    int NombreCaracteres;
    exempleflux.seekp(NombreCaracteres,position);
    
    //si c'est dans un ifstream
    exempleflux.seekg(NombreCaracteres,position);
    
    
    /*position standards , utiles*/
    position=ios::beg //début du fichier
    position=ios::end //fin du fichier
    position=ios::cur //positionn actuelle
    
    /*taille du fichier*/
    int taille(0);
    exempleflux.seekg(0,ios::end); //on va à la fin du fichier directement
    taille=exempleflux.tellg();    // on saisit le numéro de position de fin du fichier et on a sa taille
    
    
    
    
    return 0;
    
}
