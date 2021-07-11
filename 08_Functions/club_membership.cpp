// This is a modular, menu-driven program that computes
// health club membership fees


#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


// function prototypes

void displayMenu();
int getChoice();
void showFees(string category, double rates, int month);


int main()
{
    // constants for monthly membership rates
    const double ADULT_RATE = 120.0,
                 CHILD_RATE = 60.0,
                 SENIOR_RATE = 100.0;
    
    int choice;                         // Holds the user's menu choice
    int months;                          // Number of months being paid

    // Set numeric output formating
    cout << fixed << showpoint << setprecision(2);

    do
    {
        displayMenu();
        choice = getChoice();           // assign choice the value returned
                                        // by the choice function
        if (choice != 4)
        {
            cout << "For how many months? ";
            cin >> months;

            switch (choice)
            {
                case 1: showFees("Adult", ADULT_RATE, months);
                        break;
                
                case 2: showFees("Child", CHILD_RATE, months);
                        break;
                
                case 3: showFees("Senior", SENIOR_RATE, months);                
            }
        }
    } while (choice != 4);
}


// function definitions

/* displayMenu function 

    - first th function clears the screen then
    - displays menu choices

*/

void displayMenu()
{
    system("cls");                          // clear the screen on windows
    //system("clear");                      // for Unix-based operating systems

    cout << "\n Health Club Membership Menu\n\n";
    cout << "1. Standard Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit the program\n\n";
};


/* getChoice function

    - This function inputs, validates, and returns the user's menu choice
*/

int getChoice()
{
    int choice;

    cin >> choice;

    while (choice < 1 || choice > 4)
    {
        cout << "The only valid choices are 1-4. Please re-enter. ";
        cin >> choice;
    }

    return choice;
};


/* showFees function

    - This function uses the membership type, monthly rate, and number
     of months passed to it as arguments to compute and display a
     member's total charges.
    - It then holds the screen until the user presses the ENTER key. This
      is necessary because after returning fromt this function, the
      displayMenu function will be called, and it will clear the screen.
*/

void showFees(string memberType, double rate, int months)
{
    cout << endl
         << "Membership Type: " << memberType << " "
         << "Number of months: " << months << endl
         << "Total charges: $" << (rate * months) << endl;

    // Hold the screen until the user presses the ENTER key
    cout << "\nPress the ENTER key to return to the main menu. ";
    cin.get();       // clear the previous \n out of the input buffer
    cin.get();       // wait for the user to press ENTER
}