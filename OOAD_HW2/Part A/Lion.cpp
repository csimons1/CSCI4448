// Lion Class

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

    public:
        Lion(string aName, string aType);   // Actions handled by superclass
};

Lion::Lion(string aName, string aType): Feline(aName,aType)
{
    name = aName;
    type = aType;
}
