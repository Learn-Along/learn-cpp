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

    // We can add methods which can even have default parameters
    void increase_size(int additional_size = 5)
    {
        size = size + additional_size;
    }

    // We can also declare methods in the class and then
    // declare them outside the class
    void set_class_teacher_name(string new_class_teacher_name);

}; // terminate with semi-colon

// A method of Custom Class defined outside the class using ::
void CustomClass::set_class_teacher_name(string new_class_teacher_name)
{
    class_teacher_name = new_class_teacher_name;
}

int main()
{
    // instantiation is as though one is decalring a new variable
    // of type of the class
    CustomClass customObject;
    customObject.class_teacher_name = "Tr. Aggrey";
    customObject.size = 90;
    customObject.year = 2019;

    cout << "customObject.size: " << customObject.size << endl;
    cout << "customObject.class_teacher_name: "
         << customObject.class_teacher_name << endl;
    cout << "customObject.year: " << customObject.year << endl;

    // Increase size
    customObject.increase_size(7);
    cout << "customObject.size increased to: " << customObject.size << endl;

    // Use default parameter
    customObject.increase_size();
    cout << "customObject.size, by default, increased to: "
         << customObject.size << endl;

    // Calling the externally defined method is as though
    // the method was defined normally
    customObject.set_class_teacher_name("Tr. Mwine");
    cout << "customObject.class_teacher_name was changed to: "
         << customObject.class_teacher_name << endl;

    return 0;
}