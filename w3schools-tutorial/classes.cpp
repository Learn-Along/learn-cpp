#include <iostream>
#include <string>

using namespace std;

// decalaration of a class
class CustomClass
{
public:       // Access specifier
    int size; // attribute
    int year;
    string class_teacher_name;

    void increase_size(int additional_size)
    {
        size = size + additional_size;
    }

}; // terminate with semi-colon

int main()
{
    // instantiation is as though one is decalring a new variable
    // of type of the class
    CustomClass customObject;
    customObject.class_teacher_name = "Tr. Aggrey";
    customObject.size = 90;
    customObject.year = 2019;

    cout << "customObject.size: " << customObject.size << endl;
    cout << "customObject.class_teacher_name: " << customObject.class_teacher_name << endl;
    cout << "customObject.year: " << customObject.year << endl;

    // Increase size
    customObject.increase_size(7);
    cout << "customObject.size increased to: " << customObject.size << endl;

    return 0;
}