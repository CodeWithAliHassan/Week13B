#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1) {
        return 1; // base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // recursive case
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
    } else {
        cout << "Factorial of " << number << " is " << factorial(number) << endl;
    }

    return 0;
}

