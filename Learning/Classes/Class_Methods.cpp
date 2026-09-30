// In this file, you will learn about Class Methods in C++
// There are two ways to define functions in class : 1) Inside Class defination
//                                                   2) Outside Class defination

#include <iostream>
#include <string>
using namespace std;

// Inside class defination:

class myClass
{
    public:
        void Method1()
        {
            cout << "Methods are the function used inside a class";
        }
};




// Outside class defination:

class myClass2
{
    public:
        void Method2();
};

void myClass2::Method2()
{
    cout << "\nThis function is defined outside class";
}

int main()
{
    myClass class1;
    myClass2 class2;

    class1.Method1();

    class2.Method2();

    return 0;
}