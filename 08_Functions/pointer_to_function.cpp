
// Modifying the value of a caller variable
#include <iostream>


double changeIt(double* pointer_to_it);     // function prototype


int main(){
    double it {5.0};
    double result {changeIt(&it)};          // we pass the address

    std::cout << "After function execution, it = " << it
              << "\nResult returned is " << result << std::endl;
}


double changeIt(double* pit){
    *pit += 10;             // this modifies the original double

    std::cout << "Within function, *pit = " << *pit << std::endl;
    
    return *pit;
}