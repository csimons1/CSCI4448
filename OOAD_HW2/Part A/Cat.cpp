// Cat Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

//#include "Feline.cpp"

using namespace std;

class Cat : public Feline
{
    private:
        string name;
        string type;

    public:
        Cat(string aName, string aType);
        //~Cat();
        void makeNoise(void);
};

Cat::Cat(string aName, string aType): Feline(aName,aType)
{
    name = aName;
    type = aType;
}

void Cat::makeNoise(void)   // Cats cant roar. All other actions handled by super class.
{
    cout << name << ", the " << type << " meows." << endl;
}
