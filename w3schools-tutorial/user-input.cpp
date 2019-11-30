#include <iostream>

using namespace std;

int main()
{
    // Declare three integer variables
    int first_input, second_input, sum;

    cout << "Summation Calculator: \n\n";

    // Ask for first input using cout and the insertion operator (<<)
    cout << "Type in the first number: ";

    // To save the number in the 'first_input' variable
    // We 'extract' it from cin using the extraction operator (>>)
    // and put it into the variable 'first_input'
    cin >> first_input;

    cout << "Great!\nType in another number: ";

    // To save the number in the 'second_input' variable
    // We 'extract' it from cin using the extraction operator (>>)
    // and put it into the variable 'second_input'
    cin >> second_input;

    // sum the two values (assuming we actually received numbers from the user)
    sum = first_input + second_input;

    // output the sum to the terminal
    cout << "Sum is: " << sum << '\n';

    // A few Notes:
    //  - '\n' is used more commonly than << endl
    //  - Note that the extraction operator can be used to concatenate
    //    the output string with other variables e.g "Sum is " << sum

    // exit
    return 0;
}