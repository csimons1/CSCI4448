#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Lion: public Feline
{
    protected:
        string name;
        string type;
        //NoiseBehavior *noise;

    public:
        Lion(string aName, string aType);
};

// Behavior handled by interface via super class.
Lion::Lion(string aName, string aType): Feline(aName, aType)
{
    name = aName;
    type = aType;
}



