#include <iostream>

using namespace std;

int main()
{
    // holds the code to be checked
    try
    {
        // raises an error
        throw 404;
    }
    // catches the exceptions
    catch (int number)
    {
        cerr << "Error: " << number << endl;
    }

    // To catch any error, just use the ... in catch
    try
    {
        throw "Some error";
    }
    catch (...)
    {
        cerr << "Some error occurred" << endl;
    }
}