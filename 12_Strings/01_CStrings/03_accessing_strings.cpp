/***************************************************************
* The program shows how to access a character in a string *
* using the subscript operator. *

Notes:
    We can use the subscript operator to access a character if we 
    know its position in the string. Accessing means retrieving 
    only if the string is constant. Accessing can mean retrieving 
    or changing if the string is nonconstant.

***************************************************************/

#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    // Creation of two C-strings
    const char* str1 = "Hello my friends.";
    char str2 [] = "This is my second string.";

    // Retrieving character at a given position
    cout << "Character at index 6 in str1: " << str1[6] << endl;

    // Changing character at a given position
    str2[0] = 't';
    cout << "str2 after change: " << str2 << endl;
}