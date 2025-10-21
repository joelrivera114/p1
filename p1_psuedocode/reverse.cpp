
/* Reverse - reverse the order of all values in a container

    parameter(s): CONTAINER (object which stores a dynamic array), INDEX (position of value to erase)

    1. Iterate from first index to the middle index of the array:
       a. Swap the first and last values, then the second and second to last values, then third and third to last values etc.
    2. When the loop terminates the array has been reversed.

    Example given the data: 1 2 3 4 5 6 7
    1st iteration: 7 2 3 4 5 6 1
    2nd iteration: 7 6 3 4 5 2 1
    3rd iteration: 7 6 5 4 3 2 1 (done)

*/