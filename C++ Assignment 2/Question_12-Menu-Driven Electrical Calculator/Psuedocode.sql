BEGIN
  DECLARE choice               AS INTEGER
  DECLARE voltage, current     AS DOUBLE
  DECLARE power, resistance    AS DOUBLE
  DECLARE energy, time         AS DOUBLE

  DO
    PRINT "1. Calculate Power"
    PRINT "2. Calculate Resistance"
    PRINT "3. Calculate Energy"
    PRINT "4. Exit"
    PRINT "Enter choice: "
    INPUT choice

    SWITCH choice
      CASE 1:
        INPUT voltage, current
        power = voltage * current
        PRINT "Power = ", power, " W"
      CASE 2:
        INPUT voltage, current
        resistance = voltage / current
        PRINT "Resistance = ", resistance, " Ohms"
      CASE 3:
        INPUT power, time
        energy = power * time
        PRINT "Energy = ", energy, " J"
      CASE 4:
        PRINT "Exiting calculator."
      DEFAULT:
        PRINT "Invalid option. Try again."
    END SWITCH

  WHILE choice != 4

END