BEGIN
  DECLARE gpa AS DOUBLE

  PRINT "Enter your GPA: "
  INPUT gpa

  IF gpa >= 3.5 THEN
    PRINT "Eligible for engineering scholarship."
  ELSE
    PRINT "Not eligible for engineering scholarship."
  END IF

END