/***************************************************************
* The program uses a function to reverse a string object. *
***************************************************************/

#include <iostream>
#include <string>

using namespace std;


void reverse(string& strg); // function declaration

int main()
{
    // declaration of a string object
    string strg;

    // Input the original object and print it
    cout << "Enter a string: ";
    getline(cin, strg);

    cout << "Original string: " << strg << endl;
    // Reverse the object and print it
    reverse(strg);
    cout << "Reversed string: " << strg;
}


// function definition

/***************************************************************
* The function reverses a string passed by reference to it. *
***************************************************************/

void reverse(string& strg)
{
    string temp(strg);
    int size = strg.size();

    for (int i=0; i<size; i++)
    {
        //cout << *(temp[size - 1 - i]) << endl;
        strg[i] = temp[size - 1 - i];
    }
}