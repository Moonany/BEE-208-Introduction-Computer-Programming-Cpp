//Awogchaab Desmond Akanlueratey- 01246467B
#include <iostream>
using namespace std;

int main() {
    int M;  // variable to store the number
    cout << "Enter a number: ";
    cin >> M;

    // check if number is a power of 2
    if (M > 0 && (M & (M - 1)) == 0)
        cout << M << " is a power of 2";
    else
        cout << M << " is not a power of 2";

    return 0;
}

