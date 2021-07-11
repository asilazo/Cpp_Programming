// Passing an array to a function

#include <iostream>
#include <array>


double average(double array[], size_t count);   // function prototype


int main(){
    double values[] {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    std::cout << "Average = " << average(values,std::size(values)) << std::endl;
}


// Function to compute an average

double average(double array[], size_t count){
    double sum {};              // accumulate totals here
    for (size_t i {}; i < count; ++i)
        sum += array[i];        // sum the array elements
    
    return sum / count;
}