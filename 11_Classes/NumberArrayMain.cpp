#include <iostream>
#include <iomanip>
#include "NumberArray.h"

using namespace std;


int main()
{
    // Create an object
    NumberArray first(3, 10.5);

    // Make a copy of the object
    NumberArray second = first;

    // Display the values of the two objects
    cout << setprecision(2) << fixed << showpoint;
    cout << "The value stored in the first object is ";
    first.print();
    cout << endl << "Only the value in the second object "
         << "will be changed" << endl;
    
    // Now change the value in the second object
    second.setValue(20.5);

    // Display the values stored in both objects
    cout << "The value stored in the first object is ";
    first.print();
    cout << "The value stored in the second object is ";
    second.print();
}