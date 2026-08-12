#include <iostream>
using namespace std;

int main() {
    int a; // variables to store 1st integer
	int b;  // variables to store 2nd integers
	
	cout<< "Enter a: ";
	cin>> a;
	
    cout << "Enter b: ";
    cin >> b;

    // use the ternary operator to determine the larger value
    int larger = (a > b) ? a : b;

    cout << "The larger value is: " << larger;

    return 0;
}

