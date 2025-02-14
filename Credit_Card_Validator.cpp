/* Credit card validator program */
/*
   ****** Luhn Algorithm ******
    1. Double every 2nd number from right to left
      If doubled number is 2 digits, split them
    2. Add all single digit numbers from step 1
    3. Add all odd numbered digits from right to left
    4. Sum results from steps 2 & 3
    5. If step 4 is divisble by 10, # is valid
*/