#ifndef NAVALVESSEL_H
#define NAVALVESSEL_H
#include <iostream>
#include "Scanner.h"
using namespace std;

class NavalVessel{
    public:
    virtual ~NavalVessel() = default;
    Scanner scanner;
    virtual void steerLeft() = 0;
    virtual void steerRight() = 0;
    virtual void fire() = 0;
};
#endif