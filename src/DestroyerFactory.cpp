#include "../headers/DestroyerFactory.h"

NavalVessel* DestroyerFactory::createShip()
{
    return new Destroyer();
}