// Ex 2.5.3
// Rewrite so it keeps playing until the user wants to quit.

#include <iostream>

using namespace std;

int main()
{
while (true) {
    int total = 0, input = 0, max = 0;

    cout << "Welcome to NIM." << endl;
    cout << "CTRL+C To Quit." << endl;
    cout << "Pick a starting total: ";
    cin >> total;

    // Make sure total is greater than 1

    while (total < 1) {
        cout << "Total must be greater than 1." << endl;
        cout << "Reenter: ";
        cin >> total;
    }

    cout << "Pick a maximum number to allow to subtract: ";
    cin >> max;

    while (max < 1) {
        cout << "Maximum number must be greater than 1." << endl;
        cout << "Reenter: ";
        cin >> max;
    }

    while (true) {

        // Pick best response and print results.
        // Theres probably a better way to do this.
        // !TODO - fix strategy.
        if ((total % max) == 0) {
            total = total - max;
            cout << "I am subtracting " << max << endl;
        } else {
            total --;
            cout << "I am subtracting 1." << endl;
        }

        cout << "New total is " << total << endl;

        if (total <= 0) {
            cout << "I win!" << endl;
            break;
        }

        // Get user's response; must be 1 or 2

        cout << "Enter num to subtract (Between 1 to max): ";
        cin >> input;
        while (input < 1 || input > max) {
            cout << "Input must be between 1 to max." << endl;
            cout << "Re-enter: ";
            cin >> input;
        }

        total = total - input;
        cout << "New total is " << total << endl;

        if (total <= 0) {
            cout << "You win!" << endl;
            break;
        }
    }
}
    return 0;
}