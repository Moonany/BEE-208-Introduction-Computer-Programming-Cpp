# Scholarship Eligibility Checker

## Overview
This project is a simple C++ console program that checks whether an engineering student is eligible for a scholarship based on their GPA.

The program prompts the user to enter a GPA between `0.0` and `4.0`, then prints eligibility status:
- `Eligible for engineering scholarship` if GPA is `3.5` or higher
- `Not eligible for engineering scholarship` otherwise

## Files
- `Question_3-Scholarship Eligibility for Engineering Student.cpp` - main C++ source code
- `Makefile.win` - Windows makefile for building with `g++`
- `Algorithm.txt` - algorithm description (project documentation)
- `Pseudocode.sql` - pseudocode or design notes
- `scholarship_eligibility_flowchart.png` - flowchart for the program logic
- `Question_3-Scholarship Eligibility for Engineering Student.exe` - compiled executable (optional)
- `Question_3-Scholarship Eligibility for Engineering Student.o` - object file (optional)

## Build Instructions
### Using g++ directly
Open a terminal in the project folder and run:

```bash
g++ "Question_3-Scholarship Eligibility for Engineering Student.cpp" -o "Question_3-Scholarship Eligibility for Engineering Student.exe"
```

### Using `Makefile.win`
If you have `make` installed, run:

```bash
make -f Makefile.win
```

## Run Instructions
After building, run the executable from the same folder:

```bash
"Question_3-Scholarship Eligibility for Engineering Student.exe"
```

Then enter a GPA value when prompted.

