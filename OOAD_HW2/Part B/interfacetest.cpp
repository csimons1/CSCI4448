#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class InterfaceTest
{
    public:
        virtual ~InterfaceTest() = 0;
        virtual void roam() = 0;

};

InterfaceTest::~InterfaceTest()
{

}

class TestRoam: public InterfaceTest
{
    public:
        TestRoam();
        ~TestRoam();
        void roam(void);

};

TestRoam::TestRoam()
{
    //do nothing
}

TestRoam::~TestRoam()
{
    //do nothing
}

void TestRoam::roam(void)
{
    cout << "@@@" << endl;
}
