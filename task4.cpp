#include <iostream>
using namespace std;

main ()
{
string name;
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float total;
float percentage;
cout << "Enter your name:";
cin >> name;
cout << "Enter marks of subject1:";
cin >> subject1;
cout << "Enter marks of subject2:";
cin >> subject2;
cout << "Enter marks of subject3:";
cin >> subject3;
cout << "Enter marks of subject4:";
cin >> subject4;
cout << "Entr marks of subject5: ";
cin >> subject5;
total = subject1 + subject2 + subject3 + subject4 + subject5;
percentage = (total / 500.0) * 100.0;
cout << "Percentage obtained is:" << percentage;
}