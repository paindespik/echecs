#ifndef DEF_JOUEUR
#define DEF_JOUEUR

#include <string>
#include <iostream>

#include "joueur.h"
#include "plateau.h"

enum couleur{
    blanc,
    noir
};

class Joueur{
public:
    Joueur(std::string nom);
    Joueur();
private:
    std::string m_nom;
    couleur m_couleur;
};

#endif