// Christian Simons
// Project 2
// Animal Superclass Header File

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "IMakeNoise.cpp"   // NoiseBehavior interface

//#include "interfacetest.cpp"

using namespace std;

/* Animal Super-class
 * Eating, sleeping, waking, and roaming do not seem to be very different across animals
 * in a zoo, so those four actions are handled here. An interface handles the makeNoise() function.
 */

class Animal
{
    protected:
        string name;
        string type;
        NoiseBehavior *noise;

    public:
        void roam(void);
        void eat(void);
        void sleep(void);
        void wakeUp(void);
        void makeNoise(void); //Interface - Strategy Pattern
        void setNoiseBehavior(NoiseBehavior *nb);   // Dynamically change behavior on run-time.

        Animal(string aName, string aType);
};

Animal::Animal(string aName, string aType)
{
    name = aName;
    type = aType;
}

void Animal::setNoiseBehavior(NoiseBehavior *nb)
{
    noise = nb;
}

/*void Animal::roam()   //Testing
{
    test = new TestRoam();
    cout << "in Animal::roam()" << endl;
    test->roam();
}*/

// Text Outputs

void Animal::roam(void)
{
    cout << name << ", the " << type << " is exercising." << endl;
}

void Animal::eat(void)
{
    cout << name << ", the " << type << " is eating." << endl;
}

void Animal::sleep(void)
{
   cout << name << ", the " << type << " is sleeping." << endl;
}

void Animal::wakeUp(void)
{
    cout << name << ", the " << type << " is waking up." << endl;
}

// Handled via interface (Strategy Pattern)
// Name and type printing handled here, the actual behavior change occurs in the interface.
void Animal::makeNoise(void)
{
    cout << name << ", the " << type << " ";
    noise->makeNoise();
}
