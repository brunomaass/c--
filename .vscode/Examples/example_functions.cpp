#include <iostream>
#include <cmath>

using namespace std;

// Create a function 
void myFunction() {
    cout << "I just got executed!\n\n";
}

// Function name
void funcName(string fname, int age){
    cout << "My name is: " << fname << "\n";
    cout << "My age is: " << age << " years old.\n";;
}

void funcCountry(string country = "Brazil"){
    cout << "I am from: " << country << "\n";
}

int main() {

    myFunction();// Call the function
    funcName("Bruno Maass", 38);
    funcCountry("Germany");

    return 0;
}