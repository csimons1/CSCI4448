#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Elephant: public Pachyderm
{
    protected:
        string name;
        string type;
        //NoiseBehavior *noise;

    public:
        Elephant(string aName, string aType);
};

// Behavior handled by interface via super class.
Elephant::Elephant(string aName, string aType): Pachyderm(aName, aType)
{
    name = aName;
    type = aType;
}



