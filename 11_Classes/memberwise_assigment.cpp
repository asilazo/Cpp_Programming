// This program illustrates object assignments

#include <iostream>

using namespace std;


class Rectangle
{
    private:
        double width, length;
    
    public:
        Rectangle(double width, double length)
        {
            this->width = width;
            this->length = length;
        }
    
    double getWidth() const { return width; }
    double getLength() const { return length; }

    void output() const
    {
        cout << "The width is " << width << ", "
             << "and the length is " << length << endl;
    }
};


int main()
{
    // setup two rectangle objects
    Rectangle box1(10, 20), box2(5, 10);

    // display the rectangle objects
    cout << "Before the assignment:\n";
    cout << "Box 1 data:\t"; box1.output();
    cout << "Box 2data:\t"; box2.output();

    //assigment
    box1 = box2;

    // display the rectangle objects
    cout << "\nAfter the assignment:\n";
    cout << "Box 1 data:\t"; box1.output();
    cout << "Box 2 data:\t"; box2.output();
}