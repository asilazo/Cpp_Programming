// This pprogram demostrates the use of overloaded constructors

#include <iostream>
#include <iomanip>


// sale declaration

class Sale
{
    private:
        double taxRate;
    
    public:
        Sale(double rate)       // constructor with one parameter
        {
            taxRate = rate;     // handles taxable rates
        }

        Sale()                  // default constructor
        {
            taxRate = 0.0;
        }

        double calTotalSale(double cost)
        {
            double total = cost + cost * taxRate;
            return total;
        }
};


int main()
{
    Sale cashier1(0.06);        // define a Sale object with 6% sales tax
    Sale cashier2;              // define a tax-exemept sale object

    // format output
    std::cout << std::fixed << std::setprecision(2);

    // Get and display the total sale price for two $24.95 sales
    std::cout << "With a 0.06% sales tax rate, the total\n";
    std::cout << "of the $24.95 sale is $";
    std::cout << cashier1.calTotalSale(24.95) << std::endl;

    std::cout << "\nOn a tax-exempt purchase, the total\n";
    std::cout << "of the $24.95 sale is, of course, $";
    std::cout << cashier2.calTotalSale(24.95) << std::endl;
    
}