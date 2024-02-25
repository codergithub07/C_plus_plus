#include <iostream>
#include <string>

using namespace std;

// Method 1 :

    // int main(){

    //     struct{
    //     string b_name;
    //     string b_author;
    //     } book1, book2, book3;

    //     book1.b_name = "ABC";
    //     book1.b_author = "XYZ";

    //     book2.b_name = "PQR";
    //     book2.b_author = "JKL";

    //     cout << "Book 1 Name : " << book1.b_name << endl;
    //     cout << "Book 1 Author : " << book1.b_author << endl;
    //     cout << "Book 2 name : " << book2.b_name << endl;
    //     cout << "Book 2 Author : " << book2.b_author << endl;

    //     return 0;
    // }




// Method 2 :

struct car{
    int num;
    string name;
};

int main(){

    // Creating a car structure and storing it into myCar1
    car myCar1;
    myCar1.num = 123;
    myCar1.name = "Audi";

    // Creating another car structure and storing it into myCar2
    car myCar2;
    myCar2.num = 456;
    myCar2.name = "BMW";

    cout << "Car 1 number :" << myCar1.num << endl;
    cout << "Car 1 name :" << myCar1.name << endl;
    cout << "Car 2 number :" << myCar2.num << endl;
    cout << "Car 2 name :" << myCar2.name << endl;

    return 0;
}