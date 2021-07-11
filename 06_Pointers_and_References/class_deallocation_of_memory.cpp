// This programm illustrates the use of constructors and
// destructors in the allocation and deallocation of memory

#include <iostream>
#include <string>

using namespace std;



class Squares
{
    private:
        int length;     // length of the sequence
        int* sq;        // dynamically allocated array
    
    public:
        // constuctor allocates memeory for sequence of
        // squares and creates the sequence
        Squares(int len)
        {
            length = len;
            sq = new int[length];
            for (int k=0; k < length; k++)
            {
                sq[k] = (k + 1) * (k*1);
            }
            // Trcae
            cout << "Constuctor of an object of size " << length << endl;
        }

        // print the sequence
        void print()
        {
            for (int k=0; k < length; k++)
                cout << sq[k] << " ";
            cout << endl;
        }

        // desctructor deallocates storage
        ~Squares()
        {
            delete [] sq;
            // Trace
            cout << "Destroy obeject of size " << length << endl;
        }
};

/* Outputs the sequence of squares in a squares object */
void outputSquares(Squares *sqPtr)
{
    cout << "The list of squares is: ";
    sqPtr->print();
}

int main()
{
    // Main allocates a squares obejct
    Squares *sqPtr = new Squares(3);
    outputSquares(sqPtr);

    // main deallocates the Squares object
    delete sqPtr;
}