// Christian Simons
// CSCI4448 - Project 2
// Part C

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "Animal.cpp"
#include "Feline.cpp"
#include "Cat.cpp"
#include "Tiger.cpp"
#include "Lion.cpp"
#include "Pachyderm.cpp"
#include "Rhino.cpp"
#include "Elephant.cpp"
#include "Hippo.cpp"
#include "Canine.cpp"
#include "Dog.cpp"
#include "Wolf.cpp"
#include "Zoo.cpp"
//#include "ZooKeeper.cpp"  // Gone, moved to observer pattern as a subject
#include "IObserve.cpp" // Interfaces and implementations of observer pattern

using namespace std;

int main(void)
{
    Zoo z;

    // Modified for Observer pattern
    ZooKeeper *Alfred = new ZooKeeper(z);

    ZooAnnouncer Bob(Alfred);

    Alfred->wakeUp();
    Alfred->rollCall();
    Alfred->feed();
    Alfred->exercise();
    Alfred->close();

    return 0;
}
