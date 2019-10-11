// Observer Pattern Headers
// Header file used to deal with circular dependency errors

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;


   ///////////////////////////
  //  the Display Element  //
 ///////////////////////////

class Announcement
{
    public:
        virtual ~Announcement() = 0;
        virtual void announce() = 0;
};


   /////////////////////////////////
  // the Observable (ZooKeeper)  //
 /////////////////////////////////
class Subject
{
    public:
        virtual ~Subject() = 0;
        virtual void add(class Observer *o) = 0;
        virtual void removeO(class Observer *o) = 0;
        virtual void notify(void) = 0;
};

// Implementation
class ZooKeeper: public Subject
{
    private:
        vector<class Observer *> ZooA;  // List of zoo announcers, new to this implementation
        Zoo z;
        vector<Animal> animals;
        string action;

    public:
        ZooKeeper(Zoo z);
        ~ZooKeeper();
        void add(class Observer *o);
        void removeO(class Observer *o);
        void notify(void);
        void actionPerformed(void);

        // Actions
        void wakeUp(void);
        void rollCall(void);
        void feed(void);
        void exercise(void);
        void close(void);
};



   /////////////////////////////////
  // the Observer (ZooAnnouncer) //
 /////////////////////////////////
class Observer
{
    public:
        virtual ~Observer() = 0;
        virtual void update(string action) = 0;
};

// Implementation
class ZooAnnouncer: public Observer, public Announcement
{
    private:
        Subject *zooK;
        string action;

    public:
        ZooAnnouncer(Subject *zooK);
        ~ZooAnnouncer();
        void update(string action);
        void announce(void);
};


