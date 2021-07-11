/*
    An array is a data structure containing a series of elements of the same type that have
    been placed in contiguous memory locations that can be individually accessed by their
    position.
    Arrays have fixed sizes and cannot be extended; this contributes to their runtime
    performance, with a cost in terms of limited flexibility.

    Like any other variable, arrays need to be declared before they can be used. An array
    declaration has the following form:

    type name [elements];

    Here, type is the type of the contained elements, name is the identifier of the array
    variable, and elements is the length of the array, so it signifies the number of elements
    contained within.

    The values of an array can be accessed in the same way as any other values of the same
    type. The following is the syntax to access an array:
    name[index]

    Multidimensional arrays are commonly described as arrays of arrays, where an array's
    elements are other arrays.
    The following syntax illustrates a bi-dimensional array:

    type name [n][m];
    int bi_array [3][4]

*/


#include <iostream>

int main()
{
    int foo[3][5] = {{ 1, 2, 11, 15, 1989 },
                     { 0, 7, 1, 5, 19 },
                     { 9, 6, 131,1, 2 }};
    
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            std::cout << "Array elemet at [" << x << "]" << "["
                      << y << "]: " << foo[x][y] << std::endl;
        }
    }
}