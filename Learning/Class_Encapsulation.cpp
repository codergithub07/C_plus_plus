// Encapsulation gives us a method to change value of a private member outside the class

#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:
        string brand;
    
    public:
        void change(string s)
        {
            brand = s;
        }
        string getname()
        {
            return brand;
        }
};

int main()
{
    Car myCar;

    myCar.change("BMW");

    cout << myCar.getname();

    return 0;
}