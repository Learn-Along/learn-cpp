#include <iostream>
#include <fstream>
using namespace std;
// we need fstream to deal with files
//      ifstream - for reading from file
//      ofstream - for creating and writing to the file
//      fstream - for both creating, reading from and writing to file

using namespace std;

int main()
{
    // You could use a variable as the file path.
    // See https://stackoverflow.com/questions/40568925/qt-ofstream-use-variable-as-a-path-name

    // create file
    ofstream my_file("somefile1.txt");

    // write to file
    for (int index = 0; index < 5; ++index)
    {
        my_file << "Some funny text" << endl;
    }
    my_file.close();

    ifstream my_file_handle("somefile1.txt");

    // read from file using the getline(file_handle, variable)
    string line;
    while (getline(my_file_handle, line))
    {
        cout << "Line from file:\n"
             << line << endl;
    }

    // close file for memory issues
    my_file_handle.close();
}