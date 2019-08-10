#include "partie.h"
#include <time.h>
using namespace std;




Partie::Partie(){
    Partie::Partie{
        srand (time(NULL));
        int distribution_couleur;
        distribution_couleur=rand()%2;

        if(distribution_couleur==1){
            joueur1.m_couleur=blanc;
            joueur1.m_nom="blanc";
            joueur2.m_couleur=noir;
            joueur2.m_nom="noir";
        }
        else{
            joueur2.m_couleur=blanc;
            joueur2.m_nom="blanc";
            joueur1.m_couleur=noir;
            joueur1.m_nom="noir";
        }








    }
}