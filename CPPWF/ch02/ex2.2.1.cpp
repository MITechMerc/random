// Write a program to print all numbers from n1 to n2
// n1 and n2 are two numbers specified by the user
#include <iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 0;

    // Get the first number.
    cout << "Enter a number: ";
    cin >> n1;

    // Get the second number.
    cout << "Enter a number larger than the first: ";
    cin >> n2;

    while (n1 <= n2) {
        cout << n1 << " "; // Print number
        n1++; // Increment number
    }
    cout << endl;

    return 0;
}