// Zoo Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;

class Zoo
{
    private:
        vector<Animal> zoo;
    public:
        Zoo();
        void populateZoo();
        vector<Animal> getAnimals();
};

// Constructor Populates the zoo
Zoo::Zoo()
{
    this->populateZoo();
}

// Add all the animals
void Zoo::populateZoo()
{
    zoo.push_back(Cat("Carl","Cat"));
    zoo.push_back(Cat("Cathy","Cat"));
    zoo.push_back(Lion("Lilly","Lion"));
    zoo.push_back(Lion("Liam","Lion"));
    zoo.push_back(Tiger("Timothy","Tiger"));
    zoo.push_back(Tiger("Tina","Tiger"));
    zoo.push_back(Dog("Donny","Dog"));
    zoo.push_back(Dog("Doug","Dog"));
    zoo.push_back(Wolf("Wallace","Wolf"));
    zoo.push_back(Wolf("Willy","Wolf"));
    zoo.push_back(Rhino("Rhonda","Rhino"));
    zoo.push_back(Rhino("Ralph","Rhino"));
    zoo.push_back(Elephant("Evan","Elephant"));
    zoo.push_back(Elephant("Eric","Elephant"));
    zoo.push_back(Hippo("Harry","Hippo"));
    zoo.push_back(Hippo("Henry","Hippo"));
}

// Getter method
vector<Animal> Zoo::getAnimals()
{
    return this->zoo;
}
