// Tiger Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

//#include "Feline.cpp"

using namespace std;

class Tiger : public Feline
{
    private:
        string name;
        string type;

    public:
        Tiger(string aName, string aType);  // Actions handled by superclass
};

Tiger::Tiger(string aName, string aType): Feline(aName,aType)
{
    name = aName;
    type = aType;
}
