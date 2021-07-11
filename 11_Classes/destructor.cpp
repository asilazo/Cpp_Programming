// This programm demostrates a destructor

#include <iostream>

using namespace std;



class Demo
{
    public:
        Demo();         // constructor prototype
        ~Demo();        // destructor prototype
};


Demo::Demo()            // constructor function definition
{
    cout << "An object has just been defined, so the constructor"
         << " is running.\n";
}


Demo::~Demo()           // destructor function definition
{
    cout << "The destructor is now running.\n";
}




int main()
{
    Demo demoObj;       // declare a demo object

    cout << "The object now exists, but is about to be destroyed.\n";
}