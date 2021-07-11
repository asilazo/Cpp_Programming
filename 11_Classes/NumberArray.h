#include <iostream>
using namespace std;

class NumberArray
{
    private:
        double* aPtr;
        int arraySize;
    
    public:
        NumberArray(int size, double value);
        //~NumberArray() {if (arraySize > 0) delete [] aPtr;}
        // commented out to avoid problems with the dedault
        // copy constructor
        void print() const;
        void setValue(double value);
};