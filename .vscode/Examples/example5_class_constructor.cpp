#include <iostream>
using namespace std;

class Car {                     // The class    
    public:                     // Access specifier
        string brand;           // Attribute
        string model;           //Attribute
        int year;               //Attribute
        
        Car (string x, string y, int z) { // Constructor with parameters
            brand = x;
            model = y;
            year = z;
        }
};

int main() {

    // Create Car objects and call the constructor with different values
    Car myCar("BMW", "X5", 1999);
    Car myCar2("Ford", "Mustang", 1969);

    // Print values 
    cout << " " << myCar.brand << " " << myCar.model << " " << myCar.year << "\n";
    cout << " " << myCar2.brand << " " << myCar2.model << " " << myCar2.year;
    return 0;
}