// Reverse count from n to 1 in reverse order.
#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    // Get number from user
    cout << "Enter a number: ";
    cin >> n;

    while (n >= 1) {
        cout << n << " "; // Print number
        n--;    // Decrement number
    }
    cout << endl;

    return 0;
}