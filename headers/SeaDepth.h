#include <string>
using namespace std;

class SeaDepth{
    public:
    int depth;
    string underWaterObject;

    SeaDepth(int meters, string anomalousObject){
        depth = meters;
        underWaterObject = anomalousObject;
    };
};