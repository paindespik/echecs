#ifndef DEF_JOUEUR
#define DEF_JOUEUR

#include <string>
#include <iostream>

class Joueur{
public:
    Joueur(std::string nom);
    Joueur();
private:
    std::string m_nom;
};

#endif