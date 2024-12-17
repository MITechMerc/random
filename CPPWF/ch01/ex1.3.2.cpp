#include <iostream>
using namespace std;

int main()
{
    double ftemp; // Fahrenheit Temperature

    // Prompt and input value of ftemp.
    cout << "Input a Fahrenheit temp and press Enter: ";
    cin >> ftemp;

    // Convert ftemp and output results.
    cout << "Celsius temp is: " << (ftemp - 32) / 1.8 << endl;

    return 0;
}