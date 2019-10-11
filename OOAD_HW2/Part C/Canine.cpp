// Canine Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Canine: public Animal
{
    protected:
        string name;
        string type;

    public:
        Canine(string aName, string aType);
        void makeNoise(void);
};

// Constructor
Canine::Canine(string aName, string aType): Animal(aName,aType)
{
    name = aName;
    type = aType;
}

// Randomization between howling and borking
void Canine::makeNoise(void)
{
    int x = rand();

    if(x % 2 == 0)
        cout << name << ", the " << type << " borks." << endl;
    else
        cout << name << ", the " << type << " howls." << endl;

}
