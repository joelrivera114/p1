
/* Insert - insert a value at a specified index

    parameter(s): N (value to insert), INDEX (position to insert)

    1. If INDEX is out of bounds exit.
    2. If the array is full, grow it to twice the current capacity.
    3. Right shift all values between INDEX and the end of the array by 1.
    4. Store N at INDEX.
    5. Increase the number of array values by 1.

*/


