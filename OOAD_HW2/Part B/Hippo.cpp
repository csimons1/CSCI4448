#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Hippo: public Pachyderm
{
    protected:
        string name;
        string type;
        //NoiseBehavior *noise;

    public:
        Hippo(string aName, string aType);
};

// Behavior handled by interface via super class.
Hippo::Hippo(string aName, string aType): Pachyderm(aName, aType)
{
    name = aName;
    type = aType;
}



