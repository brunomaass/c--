#include <iostream>
#include <cmath>

using namespace std;

class MyClass {         // The class
    public:             // Acces specifier
    int myNum;          // Attribute (int variable)
    string myString;    // Attribute (string variable)
};

class MyCar {
    public:
    string brand;
    string model;
    int year;
};

int main() {
    MyClass myObj;      // Create an object of myClass

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text.\n\n";

    // Print attributes values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;

    // Create a objetcs of Car.
    MyCar myCar1;
    MyCar myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.model  = "Mustang";
    myCar2.year = 1969;

    // Print attribute values 
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    
    return 0;
}