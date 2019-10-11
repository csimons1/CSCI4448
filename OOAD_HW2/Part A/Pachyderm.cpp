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

void Pachyderm::makeNoise(void) // ALl over actions handled by superclass
{
    cout << name << ", the " << type << " makes a pachyderm sound." << endl;
}
