#include <iostream>
#include <string>

using namespace std;

class ParentClassOne
{
public:
    string headmaster;

protected:
    string school_name;

private:
    int school_population;
};

class ParentClassTwo
{
protected:
    string district;
};

// decalaration of a class
class CustomClass : public ParentClassOne, public ParentClassTwo
{
private:
    string class_name;

public:       // Access specifier
    int size; // attribute
    int year;
    string class_teacher_name;

    // Constructors have to be public
    CustomClass(int size_of_class, int currentYear, string current_class_teacher_name, string name)
    {
        class_name = name;
        size = size_of_class;
        year = currentYear;
        class_teacher_name = current_class_teacher_name;
        headmaster = "M. A. Alexander";
        school_name = "Makerere University";
        district = "Kampala";
    }

    string get_class_name()
    {
        return class_name;
    }

    // We can add methods which can even have default parameters
    void increase_size(int additional_size = 5)
    {
        size = size + additional_size;
    }

    // We can also declare methods in the class and then
    // declare them outside the class
    void set_class_teacher_name(string new_class_teacher_name);

    string get_school_name()
    {
        return school_name;
    }

    string get_district()
    {
        return district;
    }

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
    CustomClass customObject(20, 1999, "Mr. Musinguzi", "S1 A");
    cout << "customObject.size: " << customObject.size << endl;
    cout << "customObject.class_teacher_name: "
         << customObject.class_teacher_name << endl;
    cout << "customObject.year: " << customObject.year << endl
         << endl;

    customObject.class_teacher_name = "Tr. Aggrey";
    customObject.size = 90;
    customObject.year = 2019;

    // properties can be reset
    cout << "customObject.size [changed]: " << customObject.size << endl;
    cout << "customObject.class_teacher_name [changed]: "
         << customObject.class_teacher_name << endl;
    cout << "customObject.year [changed]: " << customObject.year << endl
         << endl;

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
         << customObject.class_teacher_name << endl
         << endl;

    // Class name is a private attribute.
    // Attempting to access it outside the class will throw
    // an error during compilation.
    // I have commented it out so that the code may run
    // cout << customObject.class_name;
    cout << "customObject.get_class_name() returns: "
         << customObject.get_class_name() << endl
         << endl;

    // Inheritance using comma separated, access specified
    // lists of parent classes and :

    // the protected attributes can be accessed in child classes
    // but not outside. The line below throws an error
    // customObject.school_name;
    cout << "customObject.get_school_name(): " << customObject.get_school_name() << endl;
    cout << "customObject.get_district(): " << customObject.get_district() << endl;

    // public attributes are passed down to the child classes
    customObject.headmaster = "M. A. Alexander";
    cout << "customObject.headmaster: " << customObject.headmaster << endl;

    return 0;
}