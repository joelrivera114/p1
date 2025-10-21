
/* commonValues - Find all common values between two sorted arrays.

    parameter(s): A, B (two SORTED container objects to be compared)

    1. Create a new container C.
    2. Create three variables, index I1 to traverse container A, index I2 to traverse container B.
    3. Iterate through A and B containers (up until the end of the smallest container)
       a. If A value == B value, append the A value to the end of C and increment I1 and I2.
       b. If the A value is larger, increment I2.
       c. If the B value is larger, increment I1.
    4. Return a pointer to container C.

*/

