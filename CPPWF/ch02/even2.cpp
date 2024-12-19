// Takes a number from the keyboard and reports whehter it is odd or even.
#include <iostream>
using namespace std;

int main()
{
    int n;

    // Get a number from the keyboard
    
    cout << "Enter a number and press ENTER: ";
    cin >> n;

    // Get remainder after dividing by 2.
    // If remainder is 0, then n is even.

    if (n % 2 == 0) {
        cout  << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}