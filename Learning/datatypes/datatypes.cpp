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
    printf("%.5f\n", d);
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << myString << endl;
    cout << boolean << endl;

    double x = 0.3 * 3 + 0.1;   // This has a rounding error, so the value is not 1. this can cause incorrect result in comparison operation
    printf("%.20f\n", x);

    // To solve the rounding error for comparison we can:
    double y = 1;   // for example
    if (abs(x-y) < 1e-9) {
        // means x and y are equal
        printf("both are equal\n");
    }


    return 0;
}