#include <iostream>
using namespace std;

main ()
{
float initialVelocity;
float finalVelocity;
float acceleration;
float time;
cout << "Enter initial velocity of car :";
cin >> initialVelocity;
cout << "Enter time taken by car: ";
cin >> time;
cout << "Enter acceleration of car:";
cin >> acceleration;
finalVelocity = (acceleration * time) + initialVelocity;
cout << "Final velocity of car is :" << finalVelocity;
}

 