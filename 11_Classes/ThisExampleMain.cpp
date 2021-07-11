// This program illustrates the use of "this" pointer

/* By deafult, the compiler provides each member of a class
    with an implicit parameter that points to the object
    through which the member function is called. The implicit
    parameter is called "this".

*/

#include <iostream>
#include "ThisExample.h"

using namespace std;


int main()
{
    Example ob1(10), ob2(20);

    // Print the address of the two objects
    cout << "The addresses of the obejcts are " << &ob1
         << " and " << &ob2 << endl;
    

    // Print the addresses and values from the within
    // the member function
    ob1.printAddressValue();
    ob2.printAddressValue();
}