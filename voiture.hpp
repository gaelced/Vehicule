#ifndef DEF_VOITURE
#define DEF_VOITURE
#include "Vehicule.hpp"
#include <string>

class Voiture:public Vehicule {
    private:

    int m_ALaClim;

    public :
    
    Voiture();
    Voiture(std::string coul, std::string marq, int vit, int pos, int clim);
    Voiture(const Voiture  &autre);
    ~Voiture();
    void setALaClim(int clim);
    void getALaClim() const;
};
#endif