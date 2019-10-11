#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Dog: public Canine
{
    protected:
        string name;
        string type;
        //NoiseBehavior *noise;

    public:
        Dog(string aName, string aType);
};

// Behavior handled by interface via super class.
Dog::Dog(string aName, string aType): Canine(aName, aType)
{
    name = aName;
    type = aType;
}


