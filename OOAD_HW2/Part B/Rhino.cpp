#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Rhino: public Pachyderm
{
    protected:
        string name;
        string type;
        //NoiseBehavior *noise;

    public:
        Rhino(string aName, string aType);
};

// Behavior handled by interface via super class.
Rhino::Rhino(string aName, string aType): Pachyderm(aName, aType)
{
    name = aName;
    type = aType;
}



