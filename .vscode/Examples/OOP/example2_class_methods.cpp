#include <iostream>
#include <cmath>

using namespace std;

class Myclass {             // The class
    public:                 // Access specifier
        void myMethod() {   // Method/function defined inside the class
            cout << "Hello World!";
        }
};

int main() {

    Myclass myClassObj;     // Create an object of MyClass

    myClassObj.myMethod();  // Call the method

    return 0;
}