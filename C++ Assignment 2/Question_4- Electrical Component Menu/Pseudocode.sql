START

DECLARE choice AS integer

DISPLAY "Electrical Component Menu"
DISPLAY "1. Resistor"
DISPLAY "2. Capacitor"
DISPLAY "3. Diode"
DISPLAY "4. Transistor"
DISPLAY "5. LED"

DISPLAY "Enter your choice: "
INPUT choice

SWITCH choice
    CASE 1:
        DISPLAY "Resistor: Used to limit current in a circuit."
        BREAK
    CASE 2:
        DISPLAY "Capacitor: Used to store electrical energy."
        BREAK
    CASE 3:
        DISPLAY "Diode: Allows current to flow in one direction only."
        BREAK
    CASE 4:
        DISPLAY "Transistor: Used for switching or amplifying signals."
        BREAK
    CASE 5:
        DISPLAY "LED: Emits light when current flows through it."
        BREAK
    DEFAULT:
        DISPLAY "Invalid selection"
END SWITCH

STOP