#include <iostream>
using namespace std;

main ()
{
string movie_name;
int adult_ticket_price;
int child_ticket_price;
int adult_ticket_sold;
int child_ticket_sold;
float percentage;
float total_amount;
float charity;
float remaining_amount;
cout << "Enter name of movie:";
cin >> movie_name;
cout << "Enter price of adult ticket:";
cin >> adult_ticket_price;
cout << "Enter price of child ticket:";
cin >> child_ticket_price;
cout << "Enter number of adult tickets sold:";
cin >> adult_ticket_sold;
cout << "Enter number of child tickets sold:";
cin >> child_ticket_sold;
cout << "Enter percentage you want to donate:";
cin >> percentage;
total_amount = (child_ticket_price * child_ticket_sold) + (adult_ticket_price * adult_ticket_sold);
remaining_amount = total_amount - percentage;
cout << "Total amount generated is:" << total_amount << endl;
cout << "Amount after donation is:" << remaining_amount << endl;
} 