// Animal Superclass

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

/* Animal Super-class
 * Eating, sleeping, waking, and roaming do not seem to be very different across animals
 * in a zoo, so those four actions are handled here. The animal families will handle
 * makeNoise(), since animals do make different sounds.
 */

class Animal
{
    protected:
        string name;
        string type;

    public:
        void roam(void);
        void eat(void);
        void sleep(void);
        void wakeUp(void);
        void makeNoise(void);

        Animal(string aName, string aType);
};

Animal::Animal(string aName, string aType)
{
    name = aName;
    type = aType;   // Didn't need to do this, but was too late to rewrite everything with this member.
}


// Text outputs
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

void Animal::makeNoise(void)
{
    cout << name << ", the " << type << " makes a generic noise." << endl;
}
