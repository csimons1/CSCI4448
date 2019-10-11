// Elephant Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Elephant: public Pachyderm
{
    private:
        string name;
        string type;

    public:
        Elephant(string aName, string aType);   // Actions handled by super class
};

Elephant::Elephant(string aName, string aType): Pachyderm(aName, aType)
{
    name = aName;
    type = aType;
}



