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

Canine::Canine(string aName, string aType): Animal(aName,aType)
{
    name = aName;
    type = aType;
}

void Canine::makeNoise(void)    //Randomization of bork and howling, all other actions handled by superclass
{
    int x = rand();

    if(x % 2 == 0)
        cout << name << ", the " << type << " borks." << endl;
    else
        cout << name << ", the " << type << " howls." << endl;

}
