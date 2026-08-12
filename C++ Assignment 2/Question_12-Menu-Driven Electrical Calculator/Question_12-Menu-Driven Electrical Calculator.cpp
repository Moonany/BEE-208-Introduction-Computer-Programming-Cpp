#include <iostream>
using namespace std;

int main() {
    int    choice;              // Menu selection
    double voltage, current;    // For power and resistance calculations
    double power, time, energy; // For energy calculation
    double resistance;          // For resistance result

    // Programme header
    cout << "========================================" << endl;
    cout << "   Menu-Driven Electrical Calculator    " << endl;
    cout << "========================================" << endl;

    // do...while: menu displays at least once before condition is checked
    do {
        // Display menu
        cout << "\n--- MENU ---" << endl;
        cout << "1. Calculate Power      (P = V x I)" << endl;
        cout << "2. Calculate Resistance (R = V / I)" << endl;
        cout << "3. Calculate Energy     (E = P x t)" << endl;
        cout << "4. Exit" << endl;
        cout << "----------------------------" << endl;
        cout << "Enter your choice (1-4): ";
        cin  >> choice;

        // switch: perform selected calculation
        switch (choice) {

            case 1: // Power = Voltage x Current
                cout << "\n-- Calculate Power --" << endl;
                cout << "Enter voltage (V): ";
                cin  >> voltage;
                cout << "Enter current (A): ";
                cin  >> current;
                power = voltage * current;
                cout << "Power = " << voltage << " V x "
                     << current << " A = " << power << " W" << endl;
                break;

            case 2: // Resistance = Voltage / Current
                cout << "\n-- Calculate Resistance --" << endl;
                cout << "Enter voltage (V): ";
                cin  >> voltage;
                cout << "Enter current (A): ";
                cin  >> current;
                if (current == 0) {
                    cout << "Error: Current cannot be zero (division by zero)." << endl;
                } else {
                    resistance = voltage / current;
                    cout << "Resistance = " << voltage << " V / "
                         << current << " A = " << resistance << " Ohms" << endl;
                }
                break;

            case 3: // Energy = Power x Time
                cout << "\n-- Calculate Energy --" << endl;
                cout << "Enter power (W): ";
                cin  >> power;
                cout << "Enter time (s): ";
                cin  >> time;
                energy = power * time;
                cout << "Energy = " << power << " W x "
                     << time << " s = " << energy << " J" << endl;
                break;

            case 4: // Exit
                cout << "\nExiting calculator. Goodbye!" << endl;
                break;

            default: // Invalid input
                cout << "\nInvalid option. Please enter 1, 2, 3, or 4." << endl;
                break;
        }

    } while (choice != 4); // Loop repeats until user selects Exit

    cout << "========================================" << endl;
    return 0;
}
