/***************************************************************

* The program shows how to use pass-by-reference to allow a *
* called function to swap two values in the calling function. *

***************************************************************/

#include <iostream>

using namespace std;


// function prototype

void swap(int& first, int& second);

int main()
{
    // Definition of variables
    int x {20};
    int y {10};

    // Printing the values of x and y before swapping
    printf("Values of x and y before swapping.\n");
    cout <<"x = " << x << " " << "y = " << y;

    // call the swap function
    swap(x,y);

    // print the value of x and y after swapping
    printf("The values of x and y after swapping.\n");
    cout << "x = " << x << " " << "y = " << endl;
}


/***************************************************************
* The swap function swaps the values of the parameters and *
* pass-by-reference allows the corresponding arguments in main *
* to be swapped accordingly. *
***************************************************************/

void swap(int& rX, int& rY)
{
    int temp = rX;
    rX = rY;
    rY = temp;
}