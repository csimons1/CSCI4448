// Rhino Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Rhino: public Pachyderm
{
    private:
        string name;
        string type;

    public:
        Rhino(string aName, string aType);  // Actions handled by superclass
};

Rhino::Rhino(string aName, string aType): Pachyderm(aName, aType)
{
    name = aName;
    type = aType;
}


