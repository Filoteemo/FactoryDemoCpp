#include "../headers/Scanner.h"
#include <iostream>

void Scanner::searchDepth(vector<SeaDepth> seaDepths, int targetDepth)
{
    bool detected = findMine(seaDepths[targetDepth]);
    if (detected)
    {
        cout << endl
        << "Mine detected at depth: " 
        << seaDepths[targetDepth].depth 
        << " | Objectidentifier: " << seaDepths[targetDepth].underWaterObject
        << endl;
    }
    else{
        cout << "\rNo mine detected at " << targetDepth << "m. Continue search...";
    }
}

bool Scanner::findMine(SeaDepth seaDepth)
{
    int foundAtIndex = seaDepth.underWaterObject.find("*");
    if (foundAtIndex >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}