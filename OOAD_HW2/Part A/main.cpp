// Christian Simons
// CSCI 4448 - Project 2
// Part A

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
#include "ZooKeeper.cpp"

//#include "interfacetest.cpp"

using namespace std;

int main(void)
{
    //Animal *testAnimal = new Animal("Bill","Dog");
    //testAnimal->roam();

    //Feline *superTest = new Feline("Bill","Cat");
    //superTest->roam();

    //Cat *superTest = new Cat("Bill","Cat");
    //superTest->makeNoise();

    Zoo z;

    ZooKeeper Alfred(z);

    Alfred.wakeUp();
    Alfred.rollCall();
    Alfred.feed();
    Alfred.exercise();
    Alfred.close();

    return 0;
}
