#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Interface Implementation
// Handles all the makeNoise() behaviors

// Abstract Class
class NoiseBehavior
{
    public:
        virtual ~NoiseBehavior() = 0;   // Pure Virtual
        virtual void makeNoise() = 0;   // Pure Virtual

};

NoiseBehavior::~NoiseBehavior()
{
    ;
}

// Actual Noises
// Concrete Classes

// Roar, for Tigers + Lions
class Roar: public NoiseBehavior
{
    public:
        Roar(){};
        ~Roar(){};
        void makeNoise(void);
};

void Roar::makeNoise(void)
{
    cout << "roars." << endl;   // Super class handles the generic part of the output, dynamic changes occur here.
}

// Meow, for Cats
class Meow: public NoiseBehavior
{
    public:
        Meow(){};
        ~Meow(){};
        void makeNoise(void);
};

void Meow::makeNoise(void)
{
    cout << "meows." << endl; // Super class handles the generic part of the output, dynamic changes occur here.
}

// Bork, for either dogs or wolves, chosen at random in the constructor.
class Bork: public NoiseBehavior
{
    public:
        Bork(){};
        ~Bork(){};
        void makeNoise(void);
};

void Bork::makeNoise(void)
{
    cout << "borks." << endl;   // Super class handles the generic part of the output, dynamic changes occur here.
}

// Howl, for either dogs or wolves, chosen at random in the constructor.
class Howl: public NoiseBehavior
{
    public:
        Howl(){};
        ~Howl(){};
        void makeNoise(void);
};

void Howl::makeNoise(void)
{
    cout << "howls." << endl; // Super class handles the generic part of the output, dynamic changes occur here.
}

// Pachyderm sound, still do not know what the onomatopoeia for their sounds.
class pachySound: public NoiseBehavior
{
    public:
        pachySound(){};
        ~pachySound(){};
        void makeNoise(void);
};

void pachySound::makeNoise(void)
{
    cout << "makes a sound a pachyderm would make." << endl; // Super class handles the generic part of the output, dynamic changes occur here.
}


