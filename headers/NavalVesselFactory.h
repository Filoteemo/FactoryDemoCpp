#ifndef NAVALVESSELFACTORY_H
#define NAVALVESSELFACTORY_H
#include "NavalVessel.h"

class NavalVesselFactory{
    public:
    virtual ~NavalVesselFactory() = default;
    virtual NavalVessel* createShip() = 0;
};
#endif