// Print only even numbers from 0 to n
#include <iostream>
using namespace std;

int main()
{
    int n = 0, i = 0;

    // Get number from user
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        if (i % 2 == 0) { // if i is even
            cout << i << " "; // print i
        }
        i++; // increment i
    }
    cout << endl;

    return 0;
}