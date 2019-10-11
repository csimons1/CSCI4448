#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Wolf Class
class Wolf: public Canine
{
    protected:
        string name;
        string type;
        //NoiseBehavior *noise;

    public:
        Wolf(string aName, string aType);
};

// Behavior handled by interface via super class.
Wolf::Wolf(string aName, string aType): Canine(aName, aType)
{
    name = aName;
    type = aType;
}


