#include <iostream>
#include<string>
using namespace std;
int main()
{
cout << "PRG-1" << endl;    
cout << "*" << endl;
cout << "**" << endl;
cout << "***" << endl;

cout << "PRG-2" <<endl;
cout << "*" << endl;
cout << "**" << endl;
cout << "***" << endl;
cout << "**" << endl;
cout << "*" << endl;

cout << "PRG-3 " << endl;
cout << "H  H" << endl;
cout << "H  H" << endl;
cout << "HHHH" << endl;
cout << "H  H" << endl;
cout << "H  H" << endl;

cout << "PRG-4" <<endl;
int total;
int first;
int second;
int third;
int fourth;
cout << " You'll be keying in four number to be summed :" << endl;
cout <<"The first number: " << endl;
cin >> first ;
cout <<" Enter the second number" << endl;
cin >> second;
cout <<" Enter the third number" << endl;
cin >> third;
cout << " Enter the fourth number" << endl;
cin >> fourth;
total=first + second + third + fourth;
cout << "The sum is " << total << endl;

cout << "PRG-5"<< endl;
int side;
int area;
int perimeter;
cout<< " A program that calculating the area and perimeter of a square" << endl;
cout << "Enter the side of the square" << endl;
cin>> side;
area=side*side;
perimeter=side*4;
cout << "the area of the square is :" << area << endl;
cout << " the perimeter of the square is : " << perimeter << endl;

cout << "PRG-6" << endl;
cout << "A program that outputs a user name in the format last, first"<< endl;
string first_name;
string last_name;
string fullName;
string comma;
string space=" ";
comma=",";
cout <<" enter your first name: " << endl;
cin >> first_name;
cout<<"enter your last name" << endl;
cin >> last_name;
fullName=last_name + comma + space + first_name;
cout<<"Your name is "<< fullName;


cout << "PRG-7" << endl;
cout << "A program that calculates the total amount including a sales tax" << endl;
const float tax=1.09;
float price;
float total_price;
cout<< " Enter the amount"<< endl;
cin >> price;
total_price = price * tax;
cout << " the final amount is "<< total_price << endl;

cout <<"PRG-8" <<endl;
cout << "The program below outputs the address in the format : street-number, street city, state zip-code" << endl;
string street_number;
string zip_code;
string city_name;
string state_name;
string address;
cout<< "Enter your state name"<< endl;
cin >> state_name;
cout <<"Enter your city name"<< endl;
cin >> city_name;
cout <<"Enter your street number" <<endl;
cin >> street_number;
cout <<" Enter the zipcode" << endl;
cin >> zip_code;
address=street_number + comma + city_name + comma + state_name +zip_code;
cout << "The address is : " << address<< endl; 



return 0;



}