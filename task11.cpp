#include <iostream>
using namespace std;

main()
{
int number;
int sum;
cout << "Enter 1st integer:";
cin >> number;
sum = number;
cout << "Enter 2nd integer:";
cin >> number;
sum = sum + number;
cout << "Enter 3rd integer:";
cin >> number;
sum = sum + number;
cout << "Enter 4th integer:";
cin >> number;
sum = sum + number;
cout << "Enter 5th integer:";
cin >> number;
sum = sum  + number;
cout << "Sum of integers is :" << sum;
}