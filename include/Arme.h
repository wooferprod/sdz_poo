#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme
{
    public:
    Arme();
    Arme(std::string nom, int degats);
    ~Arme();
    void changer(std::string nom, int degats);
    std::string getAfficher() const;
    int getDegats() const;

    private:
    std::string m_nom;
    int m_degats;
};

#endif // DEF_ARME
