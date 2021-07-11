// This program finds the probability of winning a "mini" lottery
// when the user's set of numbers must exactly match the set
// drawn by the lottery organizers. in addition to main, it uses
// three other functions.


#include <iostream>
#include <iomanip>

using namespace std;


// function prototypes

void getLotteryInfo(int&, int&);
long int computeWays(int, int);
long int factorial(int);



int main()
{
    int pickFrom,               // The number of numbers to pick from
        numPicks;               // The number of numbers to select
    
    long int ways;              // The number of different possible
                                // ways to pick the set of numbers
    
    cout << "This program will tell you the probability of "
         << "winning \"Little Lotto\". \n";
    
    getLotteryInfo(pickFrom, numPicks);
    ways = computeWays(pickFrom, numPicks);

    cout << fixed << showpoint << setprecision(4);
    cout << "\nYour chance of winning the lottery is "
         << "1 chance in " << ways << ".\n";
    cout << "This is a probability of " << (1/ways) << "\n";
}



// function definitions

/* getLotteryInfo
    - gets and validates lotter info fromt the user and places it in
      the reference parameters referencing variables in the main
      function
*/

void getLotteryInfo(int& pickFrom, int& numPicks)
{
    cout << "\nHow many numbers (1-12) are there to pick from? ";
    cin >> pickFrom;

    while (pickFrom < 1 || pickFrom > 12)
    {
        cout << "There must be between 1 - 12 numbers. \n"
             << "How many numbers are there to pick from? ";
        cin >> pickFrom;
    }

    cout << "How many numbers must you pick to play? ";
    cin >> numPicks;

    while (numPicks < 1 | numPicks > pickFrom)
    {
        if (numPicks < 1)       // too few pick
            cout << "You must pick at least one number.\n";
        else                    // too many picks
            cout << "You must pick " << pickFrom << " or fewer numbers.\n";
        
        cout << "How many numbers must you pick to play? ";
        cin >> numPicks;
    }
    
}

/* computeWays
    - Computes and returns the number of differet possible sets of k
      nummbers that can be chosen from a set of n numbers. The formula
      for this is n!/k!(n-k)!
*/

// Note that the computation is done in a way that does not require
// multiplying two factorials together. This is done to prevent any
// intermediate result becoming so large that it causes overflow.

long int computeWays(int n, int k)
{
    return (factorial(n) / factorial(k) * factorial(n - k));
}

/* factorial
    - Computesand returns the factorial of a non-negative integer passed
      to it.
*/

long int factorial(int number)
{
    long int factTotal = 1;

    for (int count = number; count >= 1; count--)
    {
        factTotal *= count;
    }

    return factTotal;
}