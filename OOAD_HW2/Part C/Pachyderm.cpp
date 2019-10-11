// Pachyderm Superclass

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Pachyderm: public Animal
{
    protected:
        string name;
        string type;

    public:
        Pachyderm(string aName, string aType);
        void makeNoise(void);
};

Pachyderm::Pachyderm(string aName, string aType): Animal(aName, aType)
{
    name = aName;
    type = aType;
}

void Pachyderm::makeNoise(void) //seriously what sounds do these things make
{
    cout << name << ", the " << type << " makes a pachyderm sound." << endl;
}
