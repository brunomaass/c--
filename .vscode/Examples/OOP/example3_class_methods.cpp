#include <iostream>
#include <cmath>

using namespace std;

class MyClass {             // The class
    public:                 // Access specifier
        void myMethod();
};

void MyClass ::myMethod() {
    cout << "Hello World!";
}


int main() {

    MyClass myClassObj;     // Create an object of MyClass

    myClassObj.myMethod();  // Call the method

    return 0;
}