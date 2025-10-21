
/* isPartOf - determine if one container is a subset of another container

    parameter(s): A, B (two objects which store a dynamic array)

    1. If A is larger than B, return false.
    2. Iterate through B to find the first value of A. 
        a. If the value is not found, return false. 
        b. If the value is found, store the index and exit the loop.
    3. Iterate through A starting from index 0 and B starting from the stored index until you reach the end of A:
       As you iterate, compare the value of A and value of B, if there is a difference return false.
       If the loop completes with no differences, return true.

*/

