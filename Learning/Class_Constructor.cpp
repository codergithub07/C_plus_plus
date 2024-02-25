#include <iostream>
#include <string>
using namespace std;

// Defining Constructor within the class :

    // class Car
    // {
    //     public:
            
    //         int xAxis;
    //         int yAxis;

    //         Car(int x, int y)
    //         {
    //             cout << "A Constructor is called automatically when object of class is created\n";
    //             xAxis = x;
    //             yAxis = y;
    //         }
    // };

    // int main()
    // {
    //     Car myCar(2, 3);
    //     cout << "x-Axis : " << myCar.xAxis << endl;
    //     cout << "y-Axis : " << myCar.yAxis << endl;

    //     return 0;
    // }




// Defining constructor outside Class :
class Car
{
    public:
        string brand;
        string model;
        int year;

        Car(string x, string y, int z);
};

Car::Car(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main()
{
    Car myCar("BMW", "753", 2024);

    cout << "Brand : " << myCar.brand << "\n";
    cout << "Model : " << myCar.model << "\n";
    cout << "Year : " << myCar.year;

    return 0;
}