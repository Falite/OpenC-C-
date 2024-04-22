//
//  Duree.hpp
//  TrainOpenClassroom5
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#ifndef Duree_hpp
#define Duree_hpp

#include <stdio.h>
#include <iostream>

class Duree {
protected:
    int m_secondes;
    int m_minutes;
    int m_heures;
    
    void affiche(std::ostream& out)const;
    
public:
    Duree(int s=0,int m=0, int h=0);
    friend std::ostream& operator<< ( std::ostream& flux,Duree const& duree);
};

#endif /* Duree_hpp */
