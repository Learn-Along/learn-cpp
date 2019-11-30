#include <iostream>
#include <string>

using namespace std;

int main()
{
    // // whole number
    int whole_number = 8;
    cout << "Whole Number: " << whole_number << "\n";

    // fraction with upto 8 decimal places
    float small_precision_decimal = 0.84728;
    cout << "Small Precision Fraction: " << small_precision_decimal << "\n";

    // fractions with upto 8 decimal places but
    // defined using exponents of 10
    float small_precision_decimal_exp = 3e4;
    cout << "Small Precision Fraction With Exponent: " << small_precision_decimal_exp << "\n";

    // fraction with upto 15 decimal places
    double large_precision_decimal = 0.232454245345234;
    cout << "Large Precision Fraction: " << large_precision_decimal << "\n";

    // fractions with upto 15 decimal places but
    // defined using exponents of 10
    double large_precision_decimal_exp = 3e14;
    cout << "Large Precision Fraction With Exponent: " << large_precision_decimal_exp << "\n";

    // Character - always in single quotes
    char real_character = 'r';
    cout << "A Single character: " << real_character << "\n";

    // Characters can be assigned their ASCII equivalents
    char ascii_character = 65; // a
    cout << "A Character defined in ASCII: " << ascii_character << '\n';

    // Boolean values evaluate to int: true = 1, false = 0
    bool true_value = true;
    cout << "Boolean true value: " << true_value << '\n';
    bool false_value = false;
    cout << "Boolean false value: " << false_value << '\n';

    // Strings are not a builtin-type but they act like they are
    // they are got from the 'string' header file
    // They are a sequence of characters
    string hello_world = "Hello World";
    cout << "A String: " << hello_world << '\n';

    // ends the function
    return 0;
}