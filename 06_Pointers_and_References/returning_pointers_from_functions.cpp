// This programm demostrates a function that returns
// a pointer

#include <iostream>
#include <cstdlib>  // for rand and srand
#include <ctime>    // for time function

using namespace std;


// function prototype
int* getRandomNumbers(int);


int main()
{
    int* numbers = nullptr;     // to point to numbers

    // get an array of five random numbers
    numbers = getRandomNumbers(5);

    // display the numbers
    for (int i=0; i < i < 5; i++)
        cout << numbers[i] << endl;
    
    // free the memory
    delete [] numbers;
    numbers = nullptr;
}


// function definition

int* getRandomNumbers(int size)
{
    int* array = nullptr;   // array to hold numbers

    // return nullptr if size is zero or negative
    if (size <= 0)
        return nullptr;
    

    // Dynamically allocate and array
    array = new int[size];

    // seed the random number generator by passing
    // the return value of time(0) to srand
    srand( time(0) );

    // populate the array with random numbers
    for (int i=0; i < size; i++)
        array[i] = rand();
    

    // return a pointer to the array
    return array;
}