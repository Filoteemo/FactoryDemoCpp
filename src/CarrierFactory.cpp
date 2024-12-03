#include "../headers/CarrierFactory.h"

NavalVessel* CarrierFactory::createShip()
{
    return new Carrier();
}