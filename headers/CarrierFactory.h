#include "NavalVessel.h"
#include "NavalVesselFactory.h"
#include "Carrier.h"

class CarrierFactory : public NavalVesselFactory{
    public:
    NavalVessel* createShip() override;
};