// Feline Superclass

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

//#include "Animal.cpp"

using namespace std;

class Feline : public Animal
{
    protected:
        string name;
        string type;

    public:
        Feline(string sName, string sType);
        //~Feline();
        void makeNoise(void);
};

Feline::Feline(string aName, string aType): Animal(aName,aType)
{
    name = aName;
    type = aType;
}

void Feline::makeNoise(void)    // Tigers/Lions roar, domestic cats cannot, so that is overridden in the cat class.
{
    cout << name << ", the " << type << " roars." << endl;
}
