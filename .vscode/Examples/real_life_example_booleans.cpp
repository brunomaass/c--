#include <iostream>
#include <cmath>

using namespace std;
int main() {
    
    int myAge;
    int minAgeToVote = 18;

    cout << "Enter your age: ";
    cin >> myAge;

    if (myAge >= minAgeToVote) {
        cout << "Old enough to vote!";
    } else{
        cout << "Not enough to vote";
    }
    return 0;
}

