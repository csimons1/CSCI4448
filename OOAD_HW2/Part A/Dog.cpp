// Dog Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Dog: public Canine
{
    private:
        string name;
        string type;

    public:
        Dog(string aName, string aType);    // Actions handled by superclass
};

Dog::Dog(string aName, string aType): Canine(aName, aType)
{
    name = aName;
    type = aType;
}
