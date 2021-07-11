#include <iostream>
#include <cmath>        // for the square root function

using namespace std;

// Function declaration
bool prime(int n);



int main()
{
    int n {0};

    // Set up infinite loop; break if user enters 0.
    // Otherwise, evaluate n for prime-ness.

    while (true)
    {
        cout << "Enter number (0 = exit) and press enter: ";
        cin >> n;
        if ( n == 0)    // if user entered 0
            break;
        
        if (prime(n)){
            cout << n << " is prime" << endl;
        } else {
            cout << n << " is not prime" << endl;
        }
    }

    return 0;
    
}


// Prime-number function. Test divisors from
// 2 to sqrt of n. Return false if a divisor
// found; otherwise, return true.

bool prime(int n){
    for (int i = 2; i <= sqrt(n); ++i){
        if (n % i == 0){    // if i divides n evenly, n is not prime
            return false;
        }
    }

    return true;    // if no divisor is found, n is prime
}