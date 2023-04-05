/*
C++ defines a new string class that is a user-defined type. The string class is defined in the C++ library is more sophisticated and easier ro use because many
operations are defined for it. 

To use the C++ string, we must include the header file <string> 
We declare a variable of type string 

*/

// Using string class

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Defining variables
    string first;
    string initial;
    string last;
    string space=" ";
    string dot =".";
    string fullName;

    // Input data for first name, initial, and last name
    cout << "Enter the first name: ";
    cin >> first;
    cout <<"Enter the initial: ";
    cin >> initial;
    cout << "Enter the last name: ";
    cin >> last;
    // Formation of full name using concatenation operator
    fullName=first + space + initial + dot + space + last ;
    cout << " The full name is : " << fullName;
    return 0;


}