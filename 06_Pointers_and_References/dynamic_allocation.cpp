// This program totals and averages the sales figures for
// any number of days. The figures are stored in a
// dynamically allocated array

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    double *sales = nullptr,    // dynamically allocated an array
            total = 0,          // accumulator
            average;            // hold average sales
    int numDays;                // to hold number of days of sales


    // get the number of sales days
    cout << "How many days of sales figures do you wish ";
    cout << "to process? ";
    cin >> numDays;

    // Dynamically allocated an array large enough to hold that many days
    // of sales amounts
    sales = new double[numDays];        // allocate memory

    // get sales figures for each day
    cout << "Enter the sales figueres below.\n";
    for (int count = 0; count < numDays; count++)
    {
        cout << "Day " << (count + 1) << ": ";
        cin >> sales[count];
    }

    // calculate the total sales
    for (int count = 0; count < numDays; count++)
    {
        total += sales[count];
    }

    // calculate the average sales per day
    average = total / numDays;

    // Display the results
    cout << setprecision(2) << fixed << showpoint;
    cout << "\n\nTotal sales: $" << total << endl;
    cout << "Average sales: $" << average << endl;

    // free dynamically allocated memory
    delete [] sales;
    sales = nullptr;
}