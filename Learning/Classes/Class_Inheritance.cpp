#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    protected:
        string brand;
};

// Simple inheritance :
class Car: public Vehicle
{
    public:
        int year;
        void name(string s)
        {
            brand = s;
        }

        string getName()
        {
            return brand;
        }
    
};

// Multilevel inheritance :
class mycar: public Car
{
    public:
        string model;
};




// Multiple inheritance :
class OneClass
{
    public:
        void oneFunction()
        {
            cout << "Content in oneFunction in OneClass" << endl;
        }
};

class NextClass
{
    public:
        void nextFunction()
        {
            cout << "Content in nextFunction in NextClass" << endl;
        }
};

class OtherClass: public OneClass, public NextClass
{
    public:
        void otherFunction()
        {
            cout << "Content in otherFunction in OtherClass" << endl;
        }
};



int main()
{
    mycar myCar;
    OtherClass someClass;

    myCar.year = 2027;
    myCar.name("BMW");
    myCar.model = "72NB";

    cout << myCar.getName() << endl;
    cout << myCar.model << "\n";
    cout << myCar.year << endl;

    someClass.oneFunction();
    someClass.nextFunction();
    someClass.otherFunction();



    return 0;
}