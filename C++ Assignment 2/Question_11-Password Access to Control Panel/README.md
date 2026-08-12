# Question 11 - Password Access to Control Panel

## Project Overview
This is a simple C++ console program that simulates password-protected access to an electrical control panel.

- The program prompts the user to enter a password.
- It checks the input against a hard-coded password (`2080`).
- If the entered password is incorrect, the user is prompted again.
- Once the correct password is entered, access is granted and the number of attempts is displayed.

## Files
- `Question_11-Password Access to Control Panel.cpp` - main C++ source file.
- `Makefile.win` - Windows makefile for building the project with `g++`.
- `Algorithm.cpp` - additional project file (purpose may vary).
- `Pseudocode.sql` - pseudocode or documentation in SQL file format.
- `Question_11-Password Access to Control Panel.exe` - compiled executable.
- `password_access_control_panel_flowchart.png` - flowchart image illustrating program logic.
- `Screenshot 2026-06-25 115557.png` / `Screenshot 2026-06-25 115717.png` - example screenshots.

## Build Instructions

### Using the provided Makefile
1. Open a terminal in the project folder.
2. Run:
   ```sh
   make -f Makefile.win
   ```
3. This produces `"Question_11-Password Access to Control Panel.exe"`.

### Using g++ directly
If you have a C++ compiler installed, run:
```sh
g++ "Question_11-Password Access to Control Panel.cpp" -o "Question_11-Password Access to Control Panel.exe"
```

## Run Instructions

Run the executable from the terminal:
```sh
"Question_11-Password Access to Control Panel.exe"
```

Then enter the password when prompted.

## Notes
- The correct password is currently set to `2080` in the source code.
- The program uses a simple loop to count attempts and does not implement password hiding or security protections.
- This is intended as a learning exercise in console input and loops.