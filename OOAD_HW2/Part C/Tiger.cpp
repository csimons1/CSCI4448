// Tiger Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Tiger : public Feline
{
    private:
        string name;
        string type;

    public:     // Actions handled by superclass
        Tiger(string aName, string aType);
};

Tiger::Tiger(string aName, string aType): Feline(aName,aType)
{
    name = aName;
    type = aType;
}
