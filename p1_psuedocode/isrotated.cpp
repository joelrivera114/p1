
/* isRotated - determine if one container is a rotated equivalent of another container 

    parameter(s): A, B (two objects which store a dynamic array)

    1. If A and B have different sizes return false.
    2. Search for the first value of A in B:
       a. If the values doesn't exist, return false.
       b. If the value exists, store its index.
    3. Iterate through A starting from index 0 and B starting from the stored index:
       a. Use mode to ensure that checked indicies are always between 0 and size-1.
       b. As you iterate, compare the value of A and value of B, if there is a difference return false.
       c. If the loop completes and no differences are found, return true.

*/

