#include <iostream>
using namespace std;

main()
{
int digit;
int digit1;
int digit2;
int digit3;
int digit4;
int divide;
int divide1;
int sum;
cout << "Enter 4 digit number:";
cin >> digit;
digit1 = digit % 10;
divide = digit / 10;
digit2 = divide % 10;
divide1 = divide / 10;
digit3 = divide1 % 10;
digit4 = divide1 / 10;
digit4 = digit4 % 10;
sum = digit1 + digit2 + digit3 + digit4;
cout << "Sum of digits is:" << sum;
}