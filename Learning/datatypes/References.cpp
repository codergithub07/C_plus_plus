#include <iostream>
#include <string>

using namespace std;

int main(){
    string food = "Donut";          // food variable
    string &meal = food;            // reference to food (or) stores address of food variable and it's value to meal variable

    cout << food << endl;           // prints Donut
    cout << meal << endl;           // prints

    return 0;
}