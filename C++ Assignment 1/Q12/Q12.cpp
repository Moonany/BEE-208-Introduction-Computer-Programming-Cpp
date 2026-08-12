#include <iostream>
using namespace std;

int main() {
    int X1;  // variable to store the number
    cout << "Enter a number: ";
    cin >> X1;

    // check if number is odd AND divisible by 3
    if ((X1 % 2 != 0) && (X1 % 3 == 0))
        cout << "The number is odd and divisible by 3";
    else
        cout << "The number does not meet both conditions";

    return 0;
}

