// Observer Pattern Interfaces and Implementations
// Header file used to deal with circular dependency errors

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>

#include "IObserve.h"

using namespace std;


// Display Element Destructor
Announcement::~Announcement()
{
    ;
}

// Observable Destructor
Subject::~Subject()
{
    ;
}

// ZooKeeper implements Observable
// Methods
ZooKeeper::ZooKeeper(Zoo z)
{
    action = "None";
    this->z = z;    // Preserved from original implementation.
    animals = z.getAnimals();   // Same as above.

}

ZooKeeper::~ZooKeeper()
{
    for (int i = 0; i < ZooA.size(); i++)   // remove all the observers
    {
        if (ZooA.size() > 0)
            removeO(ZooA[i]);
    }
}

void ZooKeeper::add(Observer *o)
{
    ZooA.push_back(o);      // add observer to list
}

void ZooKeeper::removeO(Observer *o)
{
    for(int i = 0; i < ZooA.size(); i++)    // Remove a single observer
    {
        if(ZooA[i] == o)
        {
            delete ZooA[i];
        }
    }
}

void ZooKeeper::notify(void)
{
    for(int i = 0; i < ZooA.size(); i++)    // Iterate over the observers and update them
    {
        ZooA[i]->update(action);
    }
}

void ZooKeeper::actionPerformed(void)
{
    this->notify(); // notify the change in state of action >> call announce()
}

void ZooKeeper::wakeUp(void)
{
    action = "wake up the animals!";    // Use this for the ZooAnnouncer output
    cout << "The Zookeeper wakes up the animals of the zoo." << endl;

    for(int i = 0; i < animals.size(); i++)
    {
        animals[i].wakeUp();
    }

    actionPerformed();  // Calls notify
}

void ZooKeeper::rollCall(void)
{
    action = "rollcall the animals!";
    cout << "The Zookeeper does a roll call of all the animals." << endl;

    for(int i = 0; i < animals.size(); i++)
    {
        animals[i].makeNoise();
    }

    actionPerformed();
}

void ZooKeeper::feed(void)
{
    action = "feed the animals!";
    cout << "The Zookeeper feeds the animals of the zoo." << endl;

    for(int i = 0; i < animals.size(); i++)
    {
        animals[i].eat();
    }

    actionPerformed();
}

void ZooKeeper::exercise(void)
{
    action = "get the animals exercising!";
    cout << "The Zookeeper exercises the animals of the zoo." << endl;

    for(int i = 0; i < animals.size(); i++)
    {
        animals[i].roam();
    }

    actionPerformed();
}

void ZooKeeper::close(void)
{
    action = "close the zoo!";
    cout << "The Zookeeper starts to close the zoo, the animals are going to sleep." << endl;

    for(int i = 0; i < animals.size(); i++)
    {
        animals[i].sleep();
    }

    actionPerformed();
}



// Observer Destructor
Observer::~Observer()
{
    ;
}

// ZooAnnouncer implements Observer
// Methods
ZooAnnouncer::ZooAnnouncer(Subject *zooK)
{
    //cout << "ZooAnnouncer instantiated" << endl; //Debug
    this->zooK = zooK;
    zooK->add(this);
}

ZooAnnouncer::~ZooAnnouncer()
{
    ;
}

void ZooAnnouncer::update(string action)    // Concrete Observer method
{
    this->action = action;
    announce();
}

void ZooAnnouncer::announce(void)   // Concrete Display method
{
    cout << "Hi, this is the Zoo Announcer. The Zookeeper is about to " << action << endl;
}


