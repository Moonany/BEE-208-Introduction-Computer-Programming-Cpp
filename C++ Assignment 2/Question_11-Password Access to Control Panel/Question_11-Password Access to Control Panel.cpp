#include <iostream>
using namespace std;

int main() {
    int password;                      // Variable to store entered password
    const int CORRECT_PASSWORD = 2080; // Correct password stored as a constant
    int attempts = 0;                  // Track number of attempts

    // Programme header
    cout << "========================================" << endl;
    cout << "    Electrical Control Panel Access     " << endl;
    cout << "========================================" << endl;
    cout << "Please enter the password to continue." << endl;
    cout << "----------------------------------------" << endl;

    // Read-ahead: accept first password attempt before the while loop
    cout << "Enter password: ";
    cin >> password;
    attempts++;

    // while loop: keep asking until the correct password is entered
    while (password != CORRECT_PASSWORD) {
        cout << "  --> Incorrect password. Try again." << endl;
        cout << "Enter password: ";
        cin >> password;
        attempts++;
    }

    // Loop exited — correct password has been entered
    cout << "----------------------------------------" << endl;
    cout << "Access granted to control panel." << endl;
    cout << "Password accepted on " <<attempts << " attempt." << endl;
    cout << "========================================" << endl;

    return 0;
}
