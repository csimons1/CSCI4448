#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

// Canine Super-class

class Canine: public Animal
{
    protected:
        string name;
        string type;    // Could have been implemented without, but too deep to mess with that.
        NoiseBehavior *noise; // Delegating makeNoise to the interface.

    public:
        Canine(string aName, string aType);
};

// Constructor, don't use the default.
Canine::Canine(string aName, string aType): Animal(aName, aType)
{
    name = aName;
    type = aType;

    // Preserving random element from Project 1.
    srand(time()); // Seed pseudorandomization.
    int x = rand(NULL); // Seems to use the same value for every instance
    //cout << x << endl;  //debug
    if(x % 2 == 0)
        noise = new Bork(); // Strategy pattern implemented here
    else
        noise = new Howl(); // technically here too

    setNoiseBehavior(noise);    // and here.
}
