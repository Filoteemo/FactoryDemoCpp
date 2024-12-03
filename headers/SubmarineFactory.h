#include "NavalVessel.h"
#include "NavalVesselFactory.h"
#include "Submarine.h"
using namespace std;

class SubmarineFactory : public NavalVesselFactory{
    public:
    NavalVessel* createShip() override;
};