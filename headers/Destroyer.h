#include "NavalVessel.h"

class Destroyer : public NavalVessel{
    public:
    ~Destroyer() override{
        cout << "Destroyer is destroyed" << endl;
    };
    void steerRight();
    void steerLeft();
    void fire();
};