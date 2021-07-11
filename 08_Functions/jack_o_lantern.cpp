// This program writes ABC in green, red and yellow,
// dispalying the diagonally across the screen so they
// appear to be climbing down a staircase.

#include <iostream>
#include <windows.h>    // Neede to display colors and call sleep

using namespace std;


// function prototypes

void printSpaces(int n);


int main()
{
    // Bright Green = 10, Bright Red = 12, Bright Yellow = 14

    // Get the handle to stardand output device (the console)

    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

    // Write the ABCs using 3 colors
    // Display 2 per line, stair stepping across the screen

    int color = 10;         // Starting color = Green

    for (char letter = 'A';letter <= 'Z'; letter+=2)
    {
        SetConsoleTextAttribute(screen, color);     // set the color
        printSpaces(letter-'A');                    // indent
        cout << letter              // print two letters
             << static_cast<char>(letter+1) << endl;
        color += 2;                 // choose next color
        
        if (color > 14)
            color = 10;
        
        Sleep(280);  // pause between characters to watch them appear
    }

    // Restore normal text
    SetConsoleTextAttribute(screen, 7);

    return 0;
}


// Fuction definition

void printSpaces(int n)
{
    for (int space = 1; space <= n; space++)
        cout << " ";
}