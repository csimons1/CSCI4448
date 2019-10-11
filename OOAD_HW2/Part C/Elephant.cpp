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

    public:     // Actions handled by inheritance
        Elephant(string aName, string aType);
};

Elephant::Elephant(string aName, string aType): Pachyderm(aName, aType)
{
    name = aName;
    type = aType;
}



