#include<iostream>
#include<string>
using namespace std;

int main()
{
    try
    {
        int age = 15;
        if(age >= 18)
        {
            cout << "You can enter - you are old enough";
        }
        else
        {
            throw(age);
        }
    }
    catch(int age)
    {
        cout << "You must be at least 18 to enter here\n";
        cout << "Your age is : " << age << endl;
    }

    try
    {
        string name;
        if(name == "Prathmesh")
        {
            cout << "The genius is here";
        }
        else
        {
            throw exception();
        }
    }
    catch(...)
    {
        cout << "Only genius like Prathmesh is allowed";
    }
    
    
}