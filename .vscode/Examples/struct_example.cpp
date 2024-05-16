#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Create a structure variable called myStructure
    struct 
    {
        int myNum;
        string myString;

    } myStructure;

    // Assing values to members of myStructure

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n\n";

    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // We can add variables by separating them with a coma here

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;
    
    // Print the structure members
    cout << myCar1.brand << "-" << myCar1.model << "-" << myCar1.year << "\n";
    cout << myCar2.brand << "-" << myCar2.model << "-" << myCar2.year << "\n";
}
