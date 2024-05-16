#include <iostream>
#include <string>
using namespace std;


int main() {
    // Getting a entire line
    string fullName;
    cout << "Type your first name: ";
    getline(cin, fullName);
    cout << "Your full name is: " << fullName;

}