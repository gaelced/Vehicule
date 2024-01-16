#include <string>
using namespace std;


class Voiture :public Vehicule
{
private:
   bool aLaClim;
    
public:
    Voiture();
    ~Voiture();
    voiture (const Voiture & voit);
    void stAlaClim ();
    void getAlaClim ();
    
};


