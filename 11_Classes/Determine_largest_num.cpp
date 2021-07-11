//

#include <iostream>

using namespace std;


class SimpleStat
{
    private:
        int largest;        // largest number received so far
        int sum;            // sum of numbers received
        int count;          // cont of numbers received so far

        bool isNewLargest(int);  // private class function
    

    public:
        SimpleStat();       // Default contructor
        bool addNum(int);
        double calcAverage();

    
    int getLargest()
    {
        return largest;
    }

    int getCount()
    {
        return count;
    }
};



/* SimpleStat implementaion Code */

// Default cosstructor
SimpleStat::SimpleStat()
{
    largest = sum = count = 0;
}

/* addNum */
bool SimpleStat::addNum(int num)
{
    bool goodNum = true;

    if ( num >= 0)      // if num is valid
    {
        sum += num;     // add it to the sum
        count++;        // add it to the count
        
        if (isNewLargest(num))  //find out if it is the new largest
            largest = num;
    }
    else
        goodNum = false;
}


/* isNewLargest */
bool SimpleStat::isNewLargest(int num)
{
    if (num > largest)
        return true;
    else
        return false;
}

/* calAverage */
double SimpleStat::calcAverage()
{
    if (count > 0)
        return static_cast<double>(sum) / count;
    else
        return 0;
}



/************* Client program *************/
// main

int main()
{
    int num;
    SimpleStat statHelper;

    cout << "Please enter the set of non-negative integer \n";
    cout << "values you want to average. Separate them with \n";
    cout << "spaces and enter -1 after the last value. \n\n";

    cin >> num;

    while (num >= 0)
    {
        statHelper.addNum(num);
        cin >> num;
    }

    cout << "\nYou entered " << statHelper.getCount() << "values. \n";
    cout << "The largest value was " << statHelper.getLargest() << endl;
    cout << "The average value was " << statHelper.calcAverage() << endl;

    return 0;
}