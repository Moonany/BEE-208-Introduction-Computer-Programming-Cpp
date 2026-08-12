# Power Rating Menu

A simple C++ console program that presents a menu for electrical calculations.

## Features

- Calculate DC power using voltage and current.
- Calculate resistance using Ohm's law.
- Calculate energy consumption from power and time.

## Requirements

- A C++ compiler (such as `g++`, `clang++`, or Visual Studio).

## Build

From the project folder, compile the source file:

```bash
# Using g++
g++ "Power Rating Menu.cpp" -o "Power Rating Menu"
```

## Run

Execute the compiled program:

```bash
./"Power Rating Menu"
```

On Windows PowerShell:

```powershell
."\Power Rating Menu.exe"
```

## Usage

1. Start the program.
2. Enter a menu choice:
   - `1` to calculate DC power.
   - `2` to calculate resistance using Ohm's law.
   - `3` to calculate energy consumption.
3. Follow the prompts to enter the required values.

## Notes

- The program expects numeric input for voltage, current, power, and time.
- The calculated energy is displayed in joules.
