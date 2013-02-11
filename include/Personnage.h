#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

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
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    std::string armeUtilisee() const;
    int degatsArme() const;

    private:
    // Attributs
    int m_vie;
    int m_mana;
    std::string m_nomArme;
    int m_degatsArme;

};

#endif // DEF_PERSONNAGE
