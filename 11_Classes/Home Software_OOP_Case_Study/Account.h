// This file contains declarations for the Account class

class Account
{
    private:
        double balance;
        double intRate;
        double interest;
        int transactions;
    
    public:
        // Constructor
        Account(double rate = 0.045, double bal = 0.0)
        {
            balance = bal;
            intRate = rate;
            interest = 0.0;
            transactions = 0;
        }

        void makeDeposit(double amount)
        {
            balance += amount;
            transactions++;
        }

        bool withdraw(double amount);   // implemented in Account.cpp

        //calcInterest

        //getBalance

        //getInterest
        
        //getTransactions
};


/* 
    To be contined from page 471 of starting out with C++

*/