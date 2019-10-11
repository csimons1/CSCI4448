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

    public:
        Hippo(string aName, string aType);  // Actions handled by superclass
};

Hippo::Hippo(string aName, string aType): Pachyderm(aName, aType)
{
    name = aName;
    type = aType;
}

