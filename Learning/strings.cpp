#include<iostream>
#include<string>

using namespace std;

int main()
{
    string fname = "Prathmesh";
    string lname = "Agrawal";

    // String Concatanation :

        // Method 1 :
            // string name = fname + " " + lname;
            // cout << name << endl;

        // Method 2 :
            // string newName = fname.append(lname);
            // cout << newName << endl;

    


    // String length :
        // Method 1 :
            // cout << newName.length() << endl;           // The length() & size() work in the same way. You can use any function you want.

        // Method 2 :
            // cout << name.size() << endl;

    // Accessing string :

    cout << fname[0] << endl;

    lname[3] = ' ';

    cout << lname << endl;

    return 0;
}