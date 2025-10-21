
/* Rotate - right or left shift all array values by a specified amount

    parameter(s): CONTAINER (object which stores a dynamic array), N (+/- number of positions to swap)

    +N values rotate n values to the left
    -N values rotate n values to the right

    1. Make sure that N is a value between 0 and the number of array values - 1. 
       This can be accomplished by reassigning N the result of N % NUMVALUES.
       As an example, if NUMVALUES is 10 and N is 15, N % NUMVALUES will result in N == 5 which is an appropriate index value.
    2. Allocate a new dynamic array named TEMP.
    3. Copy the array values to TEMP in their rotated position.
       a. For positive values of N the rotated position will be the (INDEX + N) % NUMVALUES.
       b. For negative values of N the rotated position will be (INDEX + NUMVALUES) % NUMVALUES.
    4. Copy TEMP back to the array thereby replacing the original array with the rotated values.

    Example:

    Original:                                       10 20 30 40 50
    10 20 30 40 50 rotated +2 to the left:          30 40 50 10 20 
    30 40 50 10 20 rotated -3 to the right:         50 10 20 30 40 

*/

/* Rotate Left or Right

    1. Same as ROTATE algorithm above, but N is always a positive value, so ignore the negative value code.

*/


