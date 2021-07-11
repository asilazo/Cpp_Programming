// This program demostrates a fucntion with a parameter

#include <iostream>


// function prototype

void displayValue(int num);


int main()
{
    std::cout << "I am passing 5 to displayValue.\n";
    displayValue(5);        // call displayValue with 5 as the argument
    std::cout << "We are now back to main.\n" << std::endl;
}


// formally define the function

void displayValue(int num){
    std::cout << "The value is " << num << std::endl;
}