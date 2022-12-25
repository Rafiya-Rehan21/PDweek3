#include <iostream>
using namespace std;

main()
{
float vegetable_price;
float fruit_price;
int kgs_of_vegetable;
int kgs_of_fruit;
float total;
cout << "Enter price of vegetables:";
cin >> vegetable_price;
cout << "Enter kilograms of vegetables:";
cin >> kgs_of_vegetable;
cout << "Enter price of fruits:";
cin >> fruit_price;
cout << "Enter kilograms of fruits:";
cin >> kgs_of_fruit;
total = (vegetable_price * kgs_of_vegetable) + (fruit_price * kgs_of_fruit);
cout << "Total price is:" << total;
} 
