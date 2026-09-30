#include <iostream>             // Calls std::cout from class/file iostream. <iostream> is a standard header

using namespace std;

int main()                      // Every C++ program can have only one main function.
{
    cout <<"Hello User" << endl;       // "<<" is called the output operator or put operator or stream insertion. The cout object is called a "stream"
    
    cout <<"Hel" <<"lo" <<" user\n";      // The "Hel", "lo" & " user" are called string literals.

    cout <<"Today's date is "<< 19 << '/' << "8/" << 2023 << endl;      // NOTE :- You can't use '' for a string/multicharacter 
    
    int a, b;
    a = 24;
    b = a*2;
    cout << "a = " << a << "\tb = " << b;      // The '=' sign is called the assignment operator. NOTE :- No variables can be initialized at the time of declarations.
}