START

DECLARE resistor, totalResistance AS double
SET totalResistance = 0

FOR count = 1 TO 5
    DISPLAY "Enter resistor ", count, " value in ohms: "
    INPUT resistor
    totalResistance = totalResistance + resistor
END FOR

DISPLAY "Total Resistance = ", totalResistance, " ohms"

STOP