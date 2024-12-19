// Determine if a number is prime.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 0;  // Number to test for prime-ness
    int i = 2;  // Loop counter
    bool is_prime = true;   // Boolean (assume true)

    // Get a number from the keyboard
    
    cout << "Enter a number and press ENTER: ";
    cin >> n;

    // Calculate square root
    double squareroot = sqrt(n);

    // Test for prine by checking for divisibility
    // by all whole numbers from 2 to sqrt(n)
    
    while (i <= squareroot) {
        if (n % i == 0) {   // If i divides n,
            is_prime = false;   // n is not prime.
            break;
        }
        ++i;    // Add 1 to i
    }

    // Print results

    if (is_prime) {
        cout << "Number is prime." << endl;
    } else {
        cout << "Number is not prime." << endl;
    }
    return 0;
}