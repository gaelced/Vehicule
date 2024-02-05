#ifndef DEF_CAMION
#define DEF_CAMION
#include "Vehicule.hpp"
#include <string>

class Camion : public Vehicule{

private:

int m_poidsCharge;

public:
Camion();
Camion(std::string coul, std::string marq, int vit, int pos, int poid);
Camion(const Camion& autre);
~Camion();
void setPoindsCharge(int poid);
void getPoindsCharge() const;
};

#endif