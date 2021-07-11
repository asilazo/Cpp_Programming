/***************************************************************
* The program creates a string object and then tests the size, *
* maximum size, and capacity before and after reservation. *
***************************************************************/

#include <iostream>
#include <string>

using namespace std;



int main()
{
    // Creating a string object
    string strg("Hello there homies");

    // Test size, maximum size and capacity
    cout << "Size: " << strg.size() << endl;
    cout << "Maximum size: " << strg.max_size() << endl;
    cout << "Capacity: " << strg.capacity() << endl;
    cout << "Empty?" << boolalpha << strg.empty() << endl;
    cout << endl;

    // Making reservation and test again
    strg.reserve(20);
    cout << "Size: " << strg.size() << endl;
    cout << "Maximum size: " << strg.max_size() << endl;
    cout << "Capacity: " << strg.capacity() << endl;
    cout << "Empty?" << boolalpha << strg.empty() << endl;
}