#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include "Arme.h"

class Personnage
{
 public:
    //Constructeur
    Personnage();
    Personnage(std::string nomArme, int degatsArme);

    // Destructeur
    ~Personnage();

    // Méthodes
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    bool estVivant() const;
    std::string getArmeUtilisee() const;

    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    int getDegatsArme() const;

 private:
    // Attributs
    int m_vie;
    int m_mana;
    Arme m_arme;

};

#endif // DEF_PERSONNAGE
