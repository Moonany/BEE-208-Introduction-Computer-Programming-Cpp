START

DECLARE voltage, totalVoltage, averageVoltage AS double
SET totalVoltage = 0

FOR count = 1 TO 10
    DISPLAY "Enter voltage reading ", count, " in V: "
    INPUT voltage
    totalVoltage = totalVoltage + voltage
END FOR

averageVoltage = totalVoltage / 10

DISPLAY "Average Voltage = ", averageVoltage, " V"

STOP