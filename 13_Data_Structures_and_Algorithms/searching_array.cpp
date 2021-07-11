// This program demonstrated the searchList function,
// which performs and a linear search on an integer array

#include <iostream>

using namespace std;


// function prototype
int searchList(const int list[], int size, int value);

const int SIZE = 5;

int main()
{
    int tests[SIZE] = {87, 75, 98, 100, 82};
    int results;    // Holds the search results

    // Search the array for the value 100
    results = searchList(tests, SIZE, 100);

    // If searchlist returned -1, 100 was not found
    if (results == -1)
        cout << "You did not earn 100 points in any test.\n";
    else
    {
        // Othersise the results contains the subscript of
        // the first 100 found in the array
        cout << "You earned 100 points on the test";
        cout << (results + 1) << ".\n";
    }
}


//function definition

int searchList(const int list[], int size, int value)
{
    int index = 0;      // Used as a subscript to search array
    int position = -1;  //used to record position of search value
    bool found = false; // flag to indicate if value was found

    while (index < size && !found)
    {
        if (list[index] == value)   // if value is found
        {
            found = true;           // set the flag
            position = index;       // record the value's subscript
        }
        index++;            // go to the next element
    }

    return position;
}