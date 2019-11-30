// Add the iostream header file. It contains std.
#include <iostream>
/* Declare that you are using std so that you don't
have to define everything in std with 'std::' prefix
e.g. std::cout 
*/
using namespace std;

// every c++ program will need the main() function
// to run
int main()
{
    // 'cout <<' prints to the screen
    // '<< endl' adds a new line to the screen
    // @AnotherWay:
    //    cout << "Hello World \n";
    cout << "Hello World" << endl;
    // ends the function
    return 0;
}