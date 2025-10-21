
/* maxNeighborDiff - Find the maximum difference between any two neighbors in a sorted array.

    parameter(s): container (object which stores a dynamic array)

    1. Compute the difference between the second and first value in the array, make this the MAXDIFF.
    2. Iterate through the rest of the array, subtracting current from next.
       If the difference between current and next > MAXDIFF, make this difference the new MAXDIFF.
    3. Once the loop ends, return MAXDIFF.

*/