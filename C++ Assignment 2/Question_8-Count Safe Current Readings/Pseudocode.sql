BEGIN
  DECLARE current      AS DOUBLE
  DECLARE safeCount    AS INTEGER = 0
  DECLARE unsafeCount  AS INTEGER = 0

  FOR i = 1 TO 8 DO
    PRINT "Enter current reading ", i, " (A): "
    INPUT current

    IF current <= 10 THEN
      safeCount = safeCount + 1
    ELSE
      unsafeCount = unsafeCount + 1
    END IF
  END FOR

  PRINT "Safe readings:   ", safeCount
  PRINT "Unsafe readings: ", unsafeCount

END