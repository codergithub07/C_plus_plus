// In this file you will learn about Class Atttributes in C++

#include <iostream>
#include <string>
using namespace std;

class myClass{

    public:
        int myNum;
        string myString;

};

int main()
{
    myClass car;

    car.myNum = 2453;
    car.myString = "BMW";

    cout << "My Car Name: " << car.myString;
    cout << "\nMy Car Number: " << car.myNum;

    return 0;
}