// Public members can be accessed from outside the class
// Private members cannot be accessed from outside the class
// Protected members can be accessed by the child class


#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        string name;
    private:
        int year;
};

int main()
{
    Car myCar;

    myCar.name = "BMW";

    cout << myCar.name << endl;
    // cout << myCar.year;

    return 0;
}