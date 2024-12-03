#include "SeaDepth.h"
#include <vector>
using namespace std;

class Scanner {
    public:
    void searchDepth(vector<SeaDepth> seaDepths, int targetDepth);
    bool findMine(SeaDepth seaDepth);
};