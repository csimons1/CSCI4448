#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "Animal.cpp"
#include "Feline.cpp"
#include "Canine.cpp"
#include "Cat.cpp"
#include "Tiger.cpp"
#include "Lion.cpp"
#include "Pachyderm.cpp"
#include "Rhino.cpp"
#include "Elephant.cpp"
#include "Hippo.cpp"
#include "Dog.cpp"
#include "Wolf.cpp"
#include "Zoo.cpp"
#include "Zookeeper.cpp"

//#include "interfacetest.cpp"

using namespace std;

int main(void)
{
    Zoo z; // The new zoo is automatically populated in it's constructor

    ZooKeeper Alfred(z);    // Make a new zooKeeper with a new zoo object as it's parameter

    Alfred.wakeUp();    // Wake up the animals
    Alfred.rollCall();  // roll call the animals
    Alfred.feed();  // feed em
    Alfred.exercise();  // exercise
    Alfred.close(); // close the zoo, make the animals sleep

    return 0;
}
