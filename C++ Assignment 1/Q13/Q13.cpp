#include <iostream>
using namespace std;

int main() {
    int X1;  // variables to store values
	int X2;  // variables to store values
    cout << "Enter X1: ";
    cin >> X1;
    cout<<"Enter X2: ";
    cin >> X2;

    // display original values
    cout << "Before swapping: X1 = " << X1 << ", X2 = " << X2 << endl;

    // swap using XOR operator
    X1 = X1 ^ X2;  // step 1
    X2 = X1 ^ X2;  // step 2
    X1 = X1 ^ X2;  // step 3

    // display swapped values
    cout << "After swapping: X1 = " << X1 << ", X2 = " << X2 << endl;

    return 0;
}

