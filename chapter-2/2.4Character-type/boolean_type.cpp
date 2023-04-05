/*
Boolean type
The C++ language defines a type called Boolean to represent a value that can be either true or false. The type is referred  to as Boolean, but the type name used
in a program is actually bool, which is a keyword. This type is used to represent the result of comparing two values.

Boolean Variables
In almost all implementations , a value of type bool is stored in a 1 byte chunk of memory. If we compare a variable of type char with a variable of type
bool, we see that both use 1 byte of memory and we can store integers in both of them. The difference is that the integer stored in type char is intepreted as
a character; the integer stored in type bool is inteperete as a logical value (0 or 1) or (false or true)

Boolean Literals
Since a Boolean type is in fact 1 byte integer, we could use a small integer to represent a Boolean literal. Traditionally, any zero is interpreted  as false;
any nonzero value is interpreted as true. When the value of a Boolean type is output, it is either 0 or 1
*/

// Use of Boolean variables and values

# include <iostream>
using namespace std;

int main ()
{
    // variable definitions
    bool x=123;
    bool y=-8;
    bool z=0;
    bool t=-0;
    bool u=true;
    bool n=false;

    // Outputting values
    cout <<" Value of x : " << x << endl;
    cout << "Value of y : " << y << endl;
    cout << "Value of z : " << z << endl;
    cout << "Value of t : " << t << endl;
    cout << "Value of u : " << u << endl;
    cout << "Value of n : " << n << endl;

    /*
    Note that any nonzero value (positive or negative) is interpreted as true; any zero values is interpreted as false. The Boolean values are displayed as 1 or 0 unless 
    we explicitly change them to true or false.
    */
    return 0;
}