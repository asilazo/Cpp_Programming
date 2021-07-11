// This program passes an object to a function. It passes it
// to one function by reference, and to the other by value.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


class InventoryItem
{
    private:
        int partNum;            // part number
        string description;     // description
        int onHand;             // units on hand
        double price;           // unit price
    
    public:

        void storeInfo(int p, string d, int oH, double cost);    // prototype

        int getPartNum()
        {
            return partNum;
        }

        string getDescription()
        { return description; }

        int getOnHand()
        { return onHand; }

        double getPrice()
        { return price; }
};

// Impelemenation code for InventoryItem class function storeInfo

void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{
    partNum = p;
    description = d;
    onHand =oH;
    price = cost;
}


// Function protoypes for client program

void storeValues(InventoryItem& item);       // receives objects by reference
void showValues(InventoryItem);         // Receives and object by value



int main()
{
    
    InventoryItem part;         // part is an InventoryItem object

    storeValues(part);
    showValues(part);

}


// Implementation of the client program functions

/* storeValues
    - This functions stores user input data in the members of an
      InventoryItem object passed to it by reference.
*/

void storeValues(InventoryItem& item)
{
    int partNum;        // local variables to hold use input
    string description;
    int qty;
    double price;

    // get data from user

    cout << "Enter data for the new part number \n";
    cout << "Part number: ";
    cin >> partNum;

    cout << "Description: ";
    cin.get();
    
    getline(cin, description);
    cout << "Quantity on hand: ";
    cin >> qty;

    cout << "Unit price: ";
    cin >> price;

    // store data in the InventoryItem object
    item.storeInfo(partNum, description, qty, price);
}

/* showValues
    - This function displays the member data stored in the
      InventoryItem object passed to it by value.
*/

void showValues(InventoryItem item)
{
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Part Number: " << item.getPartNum() << endl;
    cout << "Description: " << item.getDescription() << endl;
    cout << "Units on hand: " << item.getOnHand() << endl;
    cout << "Price: " << item.getPrice() << endl;
}