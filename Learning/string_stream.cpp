#include <sstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    stringstream ss;
    string data = "12,23,34";
    ss << data;
    string str = ss.str();
    int a, c;
    int d, f;
    char b, e;
    ss >> a;
    ss >> b;
    ss >> c;
    ss >> e;
    ss >> d;
    ss >> f;
    cout << a  << c << d << endl;
    cout << f << endl;

    return 0;
}