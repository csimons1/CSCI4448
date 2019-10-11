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

    public:     //Actions handled by super class
        Rhino(string aName, string aType);
};

Rhino::Rhino(string aName, string aType): Pachyderm(aName, aType)
{
    name = aName;
    type = aType;
}


