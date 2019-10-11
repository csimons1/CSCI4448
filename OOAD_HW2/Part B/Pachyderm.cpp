#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

/* Pachyderm Super-class
 * I actually have no idea what word is used to describe the vocalizations of
 * a rhino, elephant, or hippo.
 */
class Pachyderm: public Animal
{
    protected:
        string name;    // Animal's name
        string type;    // For printing purposes
        NoiseBehavior *noise;   // Delegating makeNoise to the interface.

    public:
        Pachyderm(string aName, string aType);
};

// Constructor
Pachyderm::Pachyderm(string aName, string aType): Animal(aName, aType)
{
    name = aName;
    type = aType;
    noise = new pachySound();   // Strategy pattern implemented here
    setNoiseBehavior(noise);    // and here.
}
