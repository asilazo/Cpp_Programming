//

#include <iostream>
#include <cmath>


// Declare the rectangle class

class Rectangle
{
    private:
        double length;
        double width;
    
    public:
        void setLength(double);
        void setWidth(double);

        double getLength();
        double getWidth();
        double calcArea();
};


// Member function implementation

/*
    some description for setLength
*/

void Rectangle::setLength(double len)
{
    if (len >= 0.0)
        length = len;
    else
    {
        length = 1.0;
        std::cout << "Invalid length. Using default value of 1.0\n";
    }
}

/*
    Some decription for setWidth
*/

void Rectangle::setWidth(double w)
{
    if (w >= 0.0)
        width = w;
    else
    {
        width = 1.0;
        std::cout << "Invalid width. Using the default value of 1.0\n";
    }
}

/*
    some description of getLength
*/

double Rectangle::getLength()
{
    return length;
}

/*
    some decription of getWidth
*/

double Rectangle::getWidth()
{
    return width;
}

/*
    some decription of calcArea
*/

double Rectangle::calcArea()
{
    return length * width;
}


// main(page 421)

