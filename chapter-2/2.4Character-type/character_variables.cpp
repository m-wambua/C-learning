/*
We can think of char as an integer smaller than an usnigned short int

Character variables
We can use character variables in our program just as we can use integer variables

Character literals
We can use two types od character literals. We cna use alphabet characters as defined in  ASCII inside two single quotes. We can also use the integer value of the 
characters . As long as it is unambiguous that we mean character literals, the compiler stores the corresponding character in memory
*/

#include <iostream>
using namespace std;
int main()
{
// Defining and initializaing some variables of char type

char first='A';
char second=65;
char third='B';
char fourth=66;

//Printing values
cout << "Value of first:" << first << endl;
cout << "Value of second" << second << endl;
cout << "Value of third" << third << endl;
cout << "Value of fourth" << fourth << endl;

return 0;

}