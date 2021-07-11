//
#include <iostream>
#include <cmath>


class Circle
{
private:
    double radius;
public:
    void setRadius(double r)
    {
        radius = r;
    }
    double calcArea()
    { return 3.14 * pow(radius, 2);}
};



int main()
{
    // Define 2 circle objects
    Circle circle1, circle2;

    // call the setRadius function for each circle
    circle1.setRadius(1);       // this sets the radius to 1
    circle2.setRadius(2.5);     // sets the radius to 2

    // call the calcArea for each circle and display the result

    std::cout << "The area of circle 1 is: " << circle1.calcArea() << std::endl;
    std::cout << "The area of circle 2  is: " << circle2.calcArea() << std::endl;
}