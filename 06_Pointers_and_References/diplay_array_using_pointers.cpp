#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 8;
    int set [] = {5,10,15,20,25,30,35,40};
    int* numPtr = set;
    
    
    cout <<"The numbers in the set are: \n";
    cout << *numPtr << " "; // displays first element
    //cout << "\nLet's see what this displays\n" << numPtr;
    
    while (numPtr < &set[SIZE - 1])
    {
        // advance numPtr to the next element
        numPtr++;
        // Display the value pointed
        cout << *numPtr << " ";
    }
    
    //cout << endl;
    //cout << *numPtr << endl;
    
    // Display the numbers in reverse order
    cout << "\nThe numbers in the set backwards are:\n";
    cout << *numPtr << " ";
    
    
    while (numPtr > set)
    {
        // Move backwards to the previous element
        numPtr--;
        // Display the value pointed to by numPtr
        cout << *numPtr << " ";
    }
    
    //cout << endl;
   // cout << *numPtr << endl;

    return 0;
}