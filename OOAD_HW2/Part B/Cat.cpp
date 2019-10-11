#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Cat: public Feline
{
    protected:
        string name;
        string type;
        NoiseBehavior *noise;

    public:
        Cat(string aName, string aType);
};

Cat::Cat(string aName, string aType): Feline(aName, aType)
{
    name = aName;
    type = aType;
    noise = new Meow(); // Domestic cats physically cannot roar, so we fix that here.
    setNoiseBehavior(noise);
}

