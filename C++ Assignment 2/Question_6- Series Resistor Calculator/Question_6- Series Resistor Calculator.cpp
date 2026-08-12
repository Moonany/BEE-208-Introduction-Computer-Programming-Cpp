#include <iostream>
using namespace std;

int main() {
    double resistor, totalResistance = 0;

    for (int count = 1; count <= 5; count++) {
        cout << "Enter resistor " << count << " value in ohms: ";
        cin >> resistor;

        totalResistance = totalResistance + resistor;
    }

    cout << "Total Resistance = " << totalResistance << " ohms" << endl;

    return 0;
}
