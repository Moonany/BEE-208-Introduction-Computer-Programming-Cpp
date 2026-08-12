#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;

    // convert binary to decimal
    while (binary > 0) {
        remainder = binary % 10;       // get the last digit
        decimal += remainder * base;   // add to decimal value
        binary /= 10;                  // remove last digit
        base *= 2;                     // move to next power of 2
    }

    cout << "The decimal value is: " << decimal;

    return 0;
}

