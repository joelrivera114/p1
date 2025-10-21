
/* Insert_Sorted - insert a value in sorted order (small to large)

    parameter(s): N (value to insert)

    1. If the array is full, grow it to twice the current capacity.
    2. Assign an INDEX to track where N will be stored, initialize it to what would be the last position in the array if a new value was added. 
    3. Reverse iterate through the array.
        a. If N < current, right shift current by 1 and decrement INDEX. 
        b. Otherwise, terminate the loop because INDEX is now the location to store N.
    4. Store N at INDEX.
    5. Increase the number of array values by 1.
    
*/


