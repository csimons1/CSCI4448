#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Feline Super-class

class Feline: public Animal
{
    protected:
        string name;
        string type;
        NoiseBehavior *noise; // Delegating makeNoise to the interface.

    public:
        Feline(string aName, string aType);
};

Feline::Feline(string aName, string aType): Animal(aName, aType)
{
    name = aName;
    type = aType;
    noise = new Roar();     // Strategy Pattern here
    setNoiseBehavior(noise);    //and here
}
