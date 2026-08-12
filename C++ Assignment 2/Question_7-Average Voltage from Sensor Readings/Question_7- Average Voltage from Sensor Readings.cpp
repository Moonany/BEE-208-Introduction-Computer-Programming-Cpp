#include <iostream>
using namespace std;

int main() {
    double voltage, totalVoltage = 0, averageVoltage;

    for (int count = 1; count <= 10; count++) {
        cout << "Enter voltage reading " << count << " V: ";
        cin >> voltage;

        totalVoltage = totalVoltage + voltage;
    }

    averageVoltage = totalVoltage / 10;

    cout << "Average Voltage = " << averageVoltage << " V" << endl;

    return 0;
}
