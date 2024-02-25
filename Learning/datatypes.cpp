#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a = 1;
    long b = 2;
    short c = 3;

    float d = 3.14;             // Float datatype can have value only upto 6-7 decimal places
    double e = 1.414;           // Double datatype can have value more than 15 decimal places
    double f = 4.3e16;

    char g = 'a';
    string myString = "hello";
    bool boolean = true;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << myString << endl;
    cout << boolean << endl;

    return 0;
}