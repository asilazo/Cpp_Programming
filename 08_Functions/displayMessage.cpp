// Create a function to display message

#include <iostream>


// function prototype

void displayMessage();


int main()
{
    std::cout << "Greetings from the main function.\n";

    displayMessage();   // call displayMessage

    std::cout << "We are back to the main function.\n";
}


// this function displays a message

void displayMessage(){
    std::cout << "Greetings from the displayMessage function.\n";
}