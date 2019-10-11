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

    public:     // Actions handled by inheritance
        Dog(string aName, string aType);
};

Dog::Dog(string aName, string aType): Canine(aName, aType)
{
    name = aName;
    type = aType;
}
