//
//  Erreur.hpp
//  TrainOpenClassroom7
//
//  Created by Abdoullatif Omarjee on 16/04/2024.
//

#ifndef Erreur_hpp
#define Erreur_hpp

#include <stdio.h>
#include <exception>
#include <string>
class Erreur : public std::exception {
public:
    Erreur(int numero=0,std::string const& phrase=" ",int niveau=0) ;
    virtual const char* what()const throw() ;
    int getNiveau()const throw() ;
    virtual ~Erreur() throw();
private:
    int m_numero;
    std::string m_phrase;
    int m_niveau;
};

#endif /* Erreur_hpp */
