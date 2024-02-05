#include "Camion.hpp"
#include <iostream>

using namespace std;

 Camion::Camion() : Vehicule()
 {
 }

 Camion::Camion(string coul, string marq, int vit, int pos, int poid): Vehicule(coul, marq, vit, pos)
 {
    m_poidsCharge = poid;
 }

 Camion::Camion(const Camion &autre) : Vehicule(autre)
{
    m_poidsCharge=autre.m_poidsCharge;
}

Camion::~Camion()
{
    cout<<"un objet a été détruit"<<endl;
}

void Camion::setPoindsCharge(int poid)
{
    m_poidsCharge=poid;
}

void Camion::getPoindsCharge() const
{
    cout<<"le poids de la charge est de "<<m_poidsCharge<<endl;
}