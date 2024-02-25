#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    // Writing a file :

    ofstream myFile("file1.txt");   // Create and open a text file

    myFile << "This is some content of the file";   // Write inside the file

    myFile.close();




    // Reading data from the file :

    string data;

    ifstream myReadFile("file1.txt");

    while(getline(myReadFile, data))
    {
        cout << data;
    }

    myReadFile.close();

    return 0;
}