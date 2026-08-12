BEGIN
  DECLARE password         AS INTEGER
  DECLARE CORRECT_PASSWORD AS INTEGER = 2080

  PRINT "Enter password: "
  INPUT password

  WHILE password != CORRECT_PASSWORD DO
    PRINT "Incorrect password. Try again."
    PRINT "Enter password: "
    INPUT password
  END WHILE

  PRINT "Access granted to control panel."

END