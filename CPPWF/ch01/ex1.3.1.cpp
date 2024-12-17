#include <iostream>
using namespace std;

int main()
{
    double ctemp; // Celsius Temperature
    double ftemp; // Fahrenheit Temperature

    // Prompt and input value of ftemp.

    cout << "Input a Fahrenheit temp and press Enter: ";
    cin >> ftemp;

    // Convert ftemp and output results.
    ctemp = (ftemp - 32) / 1.8;
    cout << "Celsius temp is: " << ctemp << endl;

    return 0;
}