// Hippo Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Hippo: public Pachyderm
{
    private:
        string name;
        string type;

    public:     //Actions handled by superclass
        Hippo(string aName, string aType);
};

Hippo::Hippo(string aName, string aType): Pachyderm(aName, aType)
{
    name = aName;
    type = aType;
}

