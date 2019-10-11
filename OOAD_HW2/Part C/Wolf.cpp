// Wolf Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Wolf: public Canine
{
    private:
        string name;
        string type;

    public:     // Actions handled by inheritance
        Wolf(string aName, string aType);
};

Wolf::Wolf(string aName, string aType): Canine(aName, aType)
{
    name = aName;
    type = aType;
}

