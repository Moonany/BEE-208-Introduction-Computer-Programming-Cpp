# Series Resistor Calculator

This project is a simple C++ console application that calculates the total resistance of five resistors connected in series.

## Files

- `Question_6- Series Resistor Calculator.cpp` - C++ source code for the calculator.
- `Makefile.win` - Windows makefile for building the executable with Dev-C++ / MinGW.

## Description

The program prompts the user to enter the value of five resistors in ohms. It then sums those values and prints the total resistance.

## Build Instructions

### Using the provided makefile

From the project directory, run:

```powershell
mingw32-make -f Makefile.win
```

or if your environment already maps `make` to the MinGW make utility:

```powershell
make -f Makefile.win
```

This produces `Question_6- Series Resistor Calculator.exe`.

### Using `g++` directly

If you prefer to compile directly, run:

```powershell
g++ "Question_6- Series Resistor Calculator.cpp" -o "Question_6- Series Resistor Calculator.exe"
```

## Run Instructions

Run the generated executable from PowerShell or Command Prompt:

```powershell
./"Question_6- Series Resistor Calculator.exe"
```

Then enter five resistor values when prompted.

## Notes

- The program expects numeric input for each resistor.
- The output is displayed in ohms.
