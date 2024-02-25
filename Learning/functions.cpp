#include<iostream>
using namespace std;

void swap(int* x, int* y);

int main()
{
    int a = 10;
    int b = 20;

    cout << "Before Swap: " << a << " " << b <<  endl;

    swap(a, b);

    cout << "After Swap: " << a << " " << b;

    return 0;

}

void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}