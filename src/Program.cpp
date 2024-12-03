#include "../headers/NavalVessel.h"
#include "../headers/CarrierFactory.h"
#include "../headers/DestroyerFactory.h"
#include "../headers/SubmarineFactory.h"
#include <chrono>
#include <thread>

int main()
{
    NavalVessel *submarine = SubmarineFactory().createShip();

    vector<SeaDepth> seaDepths;
    string identifier;
    for (int i = 0; i <= 100; i++)
    {
        if (i % 13 == 7)
        {
            identifier = "asd*fd";
        }
        else
        {
            identifier = "dsfsjhd";
        }
        seaDepths.emplace_back(SeaDepth(i, identifier));
    }

    submarine->steerRight();
    submarine->steerLeft();
    cout << endl;

    for (int i = 0; i <= 30; i++)
    {
        this_thread::sleep_for(chrono::seconds(1));
        submarine->scanner.searchDepth(seaDepths, i);
    }

    cout << endl;
    submarine->fire();

    delete submarine;

    return 0;
}