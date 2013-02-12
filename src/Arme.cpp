#include "../include/Arme.h"

using namespace std;

//string m_nom;

Arme::Arme() : m_nom("Épée rouillée"), m_degats(10)
{
    //ctor
}

Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{

}

Arme::~Arme()
{
    //dtor
}

void Arme::changer(string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}

string Arme::getAfficher() const
{
    return m_nom;
}

int Arme::getDegats() const
{
    return m_degats;
}
