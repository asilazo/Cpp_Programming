/***************************************************************
* The program shows how to read a set of lines using the *
* getline function and print them. *

Notes:
    To read a line of characters that includes whitespace, we must
    use the function defined for this purpose, the getline function.
    The getline function is a member of the istream class, which 
    means that we must have an object of type cin. If the delim 
    parameter is missing, we use the '\n' character.
    
***************************************************************/

#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    // Declaration of an array of strings
    char lines [3][80];

    // inputing three lines
    for (int i=0; i<3; i++)
    {
        cout << "Enter a line of characters: ";
        cin.getline(lines[i], 80);
    }

    // outputing the three lines
    cout << endl;
    cout << "Output: " << endl;
    for(int i=0; i<3; i++)
    {
        cout << lines[i] << endl;
    }
}