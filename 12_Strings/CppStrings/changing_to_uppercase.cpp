/***************************************************************
* The program shows how we can capitalize a line of text using *
* the operator [] as an lvalue and rvalue. *
***************************************************************/

#include <iostream>
#include <string>

using namespace std;


int main()
{
    string line;

    cout << "Enter a lineof text: " << endl;
    getline(cin, line);

    for (int i=0; i<line.size(); i++)
    {
        line[i] = toupper(line[i]);
    }

    cout << line;
}