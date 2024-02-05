#include "Voiture.hpp"
#include <iostream>

using namespace std;

Voiture::Voiture() : Vehicule()
{
}

Voiture::Voiture(string coul, string marq, int vit, int pos, int clim) : Vehicule(coul, marq, vit, pos)
{
    m_ALaClim = clim;
}

Voiture::Voiture(const Voiture &autre) : Vehicule(autre)
{
m_ALaClim = autre.m_ALaClim;
}

Voiture::~Voiture()
{
    cout<<"un objet a ete detruit"<<endl;
}

void Voiture::setALaClim(int clim)
 {
        m_ALaClim = clim;
 }

 void Voiture::getALaClim() const
 {
    cout<<"la clim est a :" << m_ALaClim <<endl;
 }