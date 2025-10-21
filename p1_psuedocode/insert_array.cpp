
/* Insert an array of values - insert an array of values into a container

    parameter(s): ARR (array of values to insert), S (size of the array to insert), INDEX (position to insert)

    1. If INDEX is out of bounds exit.
    2. If the array is full, grow it to two times the current capacity plus the size of the new array to insert.
    3. Right shift all values from index and up by S positions.
    4. Copy all ARR values into the target array starting at INDEX.
    5. Increase the number of array values by S.

*/


