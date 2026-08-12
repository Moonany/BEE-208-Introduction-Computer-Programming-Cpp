BEGIN
  DECLARE current AS DOUBLE

  PRINT "Enter current reading (A): "
  INPUT current

  WHILE current <= 10 DO
    PRINT "Safe reading: ", current, " A"
    PRINT "Enter next current reading (A): "
    INPUT current
  END WHILE

  PRINT "Overcurrent detected. Monitoring stopped."

END