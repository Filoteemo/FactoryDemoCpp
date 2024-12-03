#include "NavalVessel.h"

class Carrier : public NavalVessel{
    public:
    ~Carrier() override{
        cout << "Carrier is destroyed" << endl;
    };
    void steerRight() override;
    void steerLeft() override;
    void fire() override;
};