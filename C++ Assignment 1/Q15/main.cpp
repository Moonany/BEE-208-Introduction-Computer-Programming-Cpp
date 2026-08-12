#include <iostream>
using namespace std;

int main() {
    float m;
	float n;  // variables to store floating-point numbers
    cout << "Enter floating-point number m: ";
    cin >> m;
    cout<< "Enter floating-poitnt number n: ";
    cin>> n;

    // use the conditional operator to determine the larger number
    float larger = (m > n) ? m : n;

    cout << "The larger number is: " << larger;

    return 0;
}

