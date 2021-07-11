/***************************************************************
* The program shows how we can use the strtok function to extract *
* tokens from a date. *

Notes:
    String tokens are substrings separated by delimiters (such as 
    whitespace). The library defines the strtok function. To find 
    all tokens in a string, we must call the strtok function 
    multiple times. 

    This program loops to repeatedly call strtok until p points to 
    a null character (end of original string). Note that the
    original string is changed in this process, which means it 
    cannot be a constant string.
    Note that Program handles two other conditions. First, if the 
    string is empty, p in line 36 is set to null and the while is 
    skipped, which means nothing is printed. Second, if the string 
    is made of only one word, after the only word is printed in 
    line 18 in the first iteration, p is pointed to a null 
    character and the loop is terminated.
***************************************************************/

#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    // Declaration of a sentence and a pointer
    char str [ ] = "July 15, 2015";
    char* p;

    // Use strtok to extract all words
    p = strtok(str, ",");       // first call

    while (p)
    {
        cout << p << endl;
        p = strtok(0, ",");     // second, third, fouth calls
    }
}