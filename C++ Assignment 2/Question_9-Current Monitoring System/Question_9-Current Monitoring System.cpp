#include <iostream>
using namespace std;

int main() {
    double current;  // Variable to store each current reading

    // Programme header
    cout << "========================================" << endl;
    cout << "       Current Monitoring System        " << endl;
    cout << "========================================" << endl;
    cout << "System monitors current. Stops if > 10 A." << endl;
    cout << "----------------------------------------" << endl;

    // Accept first reading BEFORE the while loop (read-ahead pattern)
    cout << "Enter current reading (A): ";
    cin >> current;

    // while loop: continues as long as current is safe (<=10 A)
    while (current <= 10) {
        cout << "  --> Safe reading: " << current << " A" << endl;
        cout << "Enter next current reading (A): ";
        cin >> current;
    }

    // Loop exited — current exceeded 10 A
    cout << "----------------------------------------" << endl;
    cout << "WARNING: " << current << " A detected!" << endl;
    cout << "Overcurrent detected. Monitoring stopped." << endl;
    cout << "========================================" << endl;

    return 0;
}
