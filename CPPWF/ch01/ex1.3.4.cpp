// Exercise 1.3.4
// Rewrite the exampl square.cpp using the variable name num rather than x.
// Make sure you change the name everywhere 'x' appears.

#include <iostream>
using namespace std;

int main()
{
    double num = 0.0;

    // Prompt and input value of x.

    cout << "Input a number and press ENTER: ";
    cin >> num;

    // Calculate and output the square.
    cout << "The square is: " << num * num << endl;
    return 0;
}