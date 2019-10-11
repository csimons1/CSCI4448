// Lion Superclass

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

//#include "Feline.cpp"

using namespace std;

class Lion : public Feline
{
    private:
        string name;
        string type;

    public:     //Actions handled by superclass
        Lion(string aName, string aType);
};

Lion::Lion(string aName, string aType): Feline(aName,aType)
{
    name = aName;
    type = aType;
}
