#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Tiger: public Feline
{
    protected:
        string name;
        string type;
        //NoiseBehavior *noise;

    public:
        Tiger(string aName, string aType);
};

// Behavior handled by interface via super class.
Tiger::Tiger(string aName, string aType): Feline(aName, aType)
{
    name = aName;
    type = aType;
}



