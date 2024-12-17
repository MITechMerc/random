// Exercise 1.3.3
// Write a program that inputs a value into a variable x and outputs the cube (x * x * x).
// Make sure the output statement uses the word cube rather than square.

#include <iostream>
using namespace std;

int main()
{
    double x = 0.0;

    // Prompt and input value of x.

    cout << "Input a number and press ENTER: ";
    cin >> x;

    // Calculate and output the square.
    cout << "The cube is: " << x * x * x << endl;
    return 0;
}