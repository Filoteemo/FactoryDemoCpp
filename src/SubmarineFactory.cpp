#include "../headers/SubmarineFactory.h"

NavalVessel* SubmarineFactory::createShip()
{
    return new Submarine;
}