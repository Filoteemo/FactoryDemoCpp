#include "NavalVessel.h"
#include "NavalVesselFactory.h"
#include "Destroyer.h"
using namespace std;

class DestroyerFactory : public NavalVesselFactory {
    public:
    NavalVessel* createShip() override;
};