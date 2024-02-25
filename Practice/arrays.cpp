#include <iostream>
using namespace std;

int main() {

    char arr[3];

    for(int i = 0; i < 3; i++) {
	        
        cin >> arr[i];
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl;
    
    cout << arr << endl;

    return 0;
}