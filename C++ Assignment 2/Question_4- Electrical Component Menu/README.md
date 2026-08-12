# Electrical Component Menu

A simple C++ console application that displays a menu of electrical components and prints a brief description for the selected item.

## Project Files

- `Question_4- Electrical Component Menu.cpp` - main C++ source file
- `Makefile.win` - Windows makefile for compiling the project with Dev-C++/MinGW
- `Question_4- Electrical Component Menu.exe` - compiled executable (if already built)

## Features

- Displays a menu with the following options:
  1. Resistor
  2. Capacitor
  3. Diode
  4. Transistor
  5. LED
- Reads user input and shows a short description for the selected component.
- Handles invalid selections.

## Build Instructions

### Using the Makefile

If you have `make` installed and configured for Windows:

```sh
make -f Makefile.win
```

### Using g++ directly

```sh
g++ "Question_4- Electrical Component Menu.cpp" -o "Question_4- Electrical Component Menu.exe"
```

## Run

After building, run the executable from a command prompt:

```sh
"Question_4- Electrical Component Menu.exe"
```

Then enter a choice number to see the component description.

## Notes

- The program uses `std::cout` and `std::cin` for input/output.
- This project is designed for a basic programming assignment demonstrating menu selection and switch-case logic.
