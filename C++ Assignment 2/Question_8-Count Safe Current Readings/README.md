# Count Safe Current Readings

This repository contains a small C++ console program that accepts exactly 8 current readings and counts how many are safe (10 A or below) and how many are unsafe (greater than 10 A).

## Files

- `Question_8-Count Safe Current Readings.cpp` - C++ source code for the application.
- `Makefile.win` - Windows makefile to build the project.
- `Question_8-Count Safe Current Readings.dev` - Development settings or metadata file.
- `count_safe_current_readings_flowchart.png` - Flowchart for the program logic.
- `Question_8-Count Safe Current Readings.exe` - Compiled executable.
- `Question_8-Count Safe Current Readings.o` - Object file generated during compilation.

## Usage

1. Build the program using the provided Windows makefile, or compile directly with a C++ compiler.

   Example with `g++`:
   ```powershell
   g++ "Question_8-Count Safe Current Readings.cpp" -o "CountSafeCurrentReadings.exe"
   ```

2. Run the executable:
   ```powershell
   .\"CountSafeCurrentReadings.exe"
   ```

3. Enter 8 current readings when prompted.

4. The program displays the count of safe readings (<= 10 A), unsafe readings (> 10 A), and the total readings entered.

## Notes

- The program assumes numeric input for current readings.
- A safe reading is defined as 10 A or below.
- The program always processes exactly 8 readings.
