#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;

class ZooKeeper
{
    private:
        Zoo z;
        vector<Animal> animals;

    public:
        ZooKeeper(Zoo zoo);
        void wakeUp(void);
        void rollCall(void);
        void feed(void);
        void exercise(void);
        void close(void);
};

ZooKeeper::ZooKeeper(Zoo zoo)
{
    z = zoo;
    animals = z.getAnimals();
}

void ZooKeeper::wakeUp(void)
{
    cout << "The Zookeeper wakes up the animals of the zoo." << endl;

    for(int i = 0; i < animals.size(); i++)
    {
        animals[i].wakeUp();
    }
}

void ZooKeeper::rollCall(void)
{
    cout << "The Zookeeper does a roll call of all the animals." << endl;

    for(int i = 0; i < animals.size(); i++)
    {
        animals[i].makeNoise();
    }
}

void ZooKeeper::feed(void)
{
    cout << "The Zookeeper feeds the animals of the zoo." << endl;

    for(int i = 0; i < animals.size(); i++)
    {
        animals[i].eat();
    }
}

void ZooKeeper::exercise(void)
{
    cout << "The Zookeeper exercises the animals of the zoo." << endl;

    for(int i = 0; i < animals.size(); i++)
    {
        animals[i].roam();
    }
}

void ZooKeeper::close(void)
{
    cout << "The Zookeeper starts to close the zoo, the animals are going to sleep." << endl;

    for(int i = 0; i < animals.size(); i++)
    {
        animals[i].sleep();
    }
}
