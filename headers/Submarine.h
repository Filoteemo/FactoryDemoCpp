#include "NavalVessel.h"

class Submarine : public NavalVessel{
    public:
    ~Submarine() override{
        cout << "Submarine is destroyed" << endl;
    };
    void steerRight();
    void steerLeft();
    void fire();
};